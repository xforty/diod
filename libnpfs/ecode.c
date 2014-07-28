#include "ecode.h"
#include <sys/errno.h>

u32 translate_ecode(u32 ecode) {
    switch(ecode) {
#ifdef EPERM
        case EPERM: return 1;
#endif
#ifdef ENOENT
        case ENOENT: return 2;
#endif
#ifdef ESRCH
        case ESRCH: return 3;
#endif
#ifdef EINTR
        case EINTR: return 4;
#endif
#ifdef EIO
        case EIO: return 5;
#endif
#ifdef ENXIO
        case ENXIO: return 6;
#endif
#ifdef ENOEXEC
        case ENOEXEC: return 8;
#endif
#ifdef EBADF
        case EBADF: return 9;
#endif
#ifdef ECHILD
        case ECHILD: return 10;
#endif
#ifdef EAGAIN
        case EAGAIN: return 11;
#endif
#ifdef ENOMEM
        case ENOMEM: return 12;
#endif
#ifdef EACCES
        case EACCES: return 13;
#endif
#ifdef EFAULT
        case EFAULT: return 14;
#endif
#ifdef ENOTBLK
        case ENOTBLK: return 15;
#endif
#ifdef EBUSY
        case EBUSY: return 16;
#endif
#ifdef EEXIST
        case EEXIST: return 17;
#endif
#ifdef EXDEV
        case EXDEV: return 18;
#endif
#ifdef ENODEV
        case ENODEV: return 19;
#endif
#ifdef ENOTDIR
        case ENOTDIR: return 20;
#endif
#ifdef EISDIR
        case EISDIR: return 21;
#endif
#ifdef EINVAL
        case EINVAL: return 22;
#endif
#ifdef ENFILE
        case ENFILE: return 23;
#endif
#ifdef EMFILE
        case EMFILE: return 24;
#endif
#ifdef ENOTTY
        case ENOTTY: return 25;
#endif
#ifdef ETXTBSY
        case ETXTBSY: return 26;
#endif
#ifdef EFBIG
        case EFBIG: return 27;
#endif
#ifdef ENOSPC
        case ENOSPC: return 28;
#endif
#ifdef ESPIPE
        case ESPIPE: return 29;
#endif
#ifdef EROFS
        case EROFS: return 30;
#endif
#ifdef EMLINK
        case EMLINK: return 31;
#endif
#ifdef EPIPE
        case EPIPE: return 32;
#endif
#ifdef EDOM
        case EDOM: return 33;
#endif
#ifdef ERANGE
        case ERANGE: return 34;
#endif
#ifdef EDEADLK
        case EDEADLK: return 35;
#endif
#ifdef ENAMETOOLONG
        case ENAMETOOLONG: return 36;
#endif
#ifdef ENOLCK
        case ENOLCK: return 37;
#endif
#ifdef ENOSYS
        case ENOSYS: return 38;
#endif
#ifdef ENOTEMPTY
        case ENOTEMPTY: return 39;
#endif
#ifdef ELOOP
        case ELOOP: return 40;
#endif
#ifdef ENOMSG
        case ENOMSG: return 42;
#endif
#ifdef EIDRM
        case EIDRM: return 43;
#endif
#ifdef ECHRNG
        case ECHRNG: return 44;
#endif
#ifdef ELNRNG
        case ELNRNG: return 48;
#endif
#ifdef EUNATCH
        case EUNATCH: return 49;
#endif
#ifdef ENOCSI
        case ENOCSI: return 50;
#endif
#ifdef EBADE
        case EBADE: return 52;
#endif
#ifdef EBADR
        case EBADR: return 53;
#endif
#ifdef EXFULL
        case EXFULL: return 54;
#endif
#ifdef ENOANO
        case ENOANO: return 55;
#endif
#ifdef EBADRQC
        case EBADRQC: return 56;
#endif
#ifdef EBADSLT
        case EBADSLT: return 57;
#endif
#ifdef EBFONT
        case EBFONT: return 59;
#endif
#ifdef ENOSTR
        case ENOSTR: return 60;
#endif
#ifdef ENODATA
        case ENODATA: return 61;
#endif
#ifdef ENOATTR
        case ENOATTR: return 61;
#endif
#ifdef ETIME
        case ETIME: return 62;
#endif
#ifdef ENOSR
        case ENOSR: return 63;
#endif
#ifdef ENONET
        case ENONET: return 64;
#endif
#ifdef ENOPKG
        case ENOPKG: return 65;
#endif
#ifdef EREMOTE
        case EREMOTE: return 66;
#endif
#ifdef ENOLINK
        case ENOLINK: return 67;
#endif
#ifdef EADV
        case EADV: return 68;
#endif
#ifdef ESRMNT
        case ESRMNT: return 69;
#endif
#ifdef ECOMM
        case ECOMM: return 70;
#endif
#ifdef EPROTO
        case EPROTO: return 71;
#endif
#ifdef EMULTIHOP
        case EMULTIHOP: return 72;
#endif
#ifdef EDOTDOT
        case EDOTDOT: return 73;
#endif
#ifdef EBADMSG
        case EBADMSG: return 74;
#endif
#ifdef EOVERFLOW
        case EOVERFLOW: return 75;
#endif
#ifdef ENOTUNIQ
        case ENOTUNIQ: return 76;
#endif
#ifdef EBADFD
        case EBADFD: return 77;
#endif
#ifdef EREMCHG
        case EREMCHG: return 78;
#endif
#ifdef ELIBACC
        case ELIBACC: return 79;
#endif
#ifdef ELIBBAD
        case ELIBBAD: return 80;
#endif
#ifdef ELIBSCN
        case ELIBSCN: return 81;
#endif
#ifdef ELIBMAX
        case ELIBMAX: return 82;
#endif
#ifdef ELIBEXEC
        case ELIBEXEC: return 83;
#endif
#ifdef EILSEQ
        case EILSEQ: return 84;
#endif
#ifdef ERESTART
        case ERESTART: return 85;
#endif
#ifdef ESTRPIPE
        case ESTRPIPE: return 86;
#endif
#ifdef EUSERS
        case EUSERS: return 87;
#endif
#ifdef ENOTSOCK
        case ENOTSOCK: return 88;
#endif
#ifdef EDESTADDRREQ
        case EDESTADDRREQ: return 89;
#endif
#ifdef EMSGSIZE
        case EMSGSIZE: return 90;
#endif
#ifdef EPROTOTYPE
        case EPROTOTYPE: return 91;
#endif
#ifdef ENOPROTOOPT
        case ENOPROTOOPT: return 92;
#endif
#ifdef EPROTONOSUPPORT
        case EPROTONOSUPPORT: return 93;
#endif
#ifdef ESOCKTNOSUPPORT
        case ESOCKTNOSUPPORT: return 94;
#endif
#ifdef EOPNOTSUPP
        case EOPNOTSUPP: return 95;
#endif
#ifdef EPFNOSUPPORT
        case EPFNOSUPPORT: return 96;
#endif
#ifdef EAFNOSUPPORT
        case EAFNOSUPPORT: return 97;
#endif
#ifdef EADDRINUSE
        case EADDRINUSE: return 98;
#endif
#ifdef EADDRNOTAVAIL
        case EADDRNOTAVAIL: return 99;
#endif
#ifdef ENETDOWN
        case ENETDOWN: return 100;
#endif
#ifdef ENETUNREACH
        case ENETUNREACH: return 101;
#endif
#ifdef ENETRESET
        case ENETRESET: return 102;
#endif
#ifdef ECONNABORTED
        case ECONNABORTED: return 103;
#endif
#ifdef ECONNRESET
        case ECONNRESET: return 104;
#endif
#ifdef ENOBUFS
        case ENOBUFS: return 105;
#endif
#ifdef EISCONN
        case EISCONN: return 106;
#endif
#ifdef ENOTCONN
        case ENOTCONN: return 107;
#endif
#ifdef ESHUTDOWN
        case ESHUTDOWN: return 108;
#endif
#ifdef ETOOMANYREFS
        case ETOOMANYREFS: return 109;
#endif
#ifdef ETIMEDOUT
        case ETIMEDOUT: return 110;
#endif
#ifdef ECONNREFUSED
        case ECONNREFUSED: return 111;
#endif
#ifdef EHOSTDOWN
        case EHOSTDOWN: return 112;
#endif
#ifdef EHOSTUNREACH
        case EHOSTUNREACH: return 113;
#endif
#ifdef EALREADY
        case EALREADY: return 114;
#endif
#ifdef EINPROGRESS
        case EINPROGRESS: return 115;
#endif
#ifdef ESTALE
        case ESTALE: return 116;
#endif
#ifdef EUCLEAN
        case EUCLEAN: return 117;
#endif
#ifdef ENOTNAM
        case ENOTNAM: return 118;
#endif
#ifdef ENAVAIL
        case ENAVAIL: return 119;
#endif
#ifdef EISNAM
        case EISNAM: return 120;
#endif
#ifdef EREMOTEIO
        case EREMOTEIO: return 121;
#endif
#ifdef EDQUOT
        case EDQUOT: return 122;
#endif
#ifdef ENOMEDIUM
        case ENOMEDIUM: return 123;
#endif
#ifdef EMEDIUMTYPE
        case EMEDIUMTYPE: return 124;
#endif
#ifdef ECANCELED
        case ECANCELED: return 125;
#endif
#ifdef ENOKEY
        case ENOKEY: return 126;
#endif
#ifdef EKEYEXPIRED
        case EKEYEXPIRED: return 127;
#endif
#ifdef EKEYREVOKED
        case EKEYREVOKED: return 128;
#endif
#ifdef EKEYREJECTED
        case EKEYREJECTED: return 129;
#endif
#ifdef EOWNERDEAD
        case EOWNERDEAD: return 130;
#endif
#ifdef ENOTRECOVERABLE
        case ENOTRECOVERABLE: return 131;
#endif
        default: return ecode;
    };
}
