@interface IESMMMpeg : NSObject

+ (BOOL)isMPEGFile:(id)a0;
+ (id)decodeSpade:(id)a0;
+ (id)getAVCConfigFromAVAsset:(id)a0;
+ (id)getiOSProfileWithConfig:(id)a0;
+ (BOOL)findAtom:(unsigned int)a0 hld:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 info:(struct VEAtomInfo { unsigned long long x0; unsigned long long x1; int x2; } *)a2;
+ (id)getFtypFromFile:(id)a0;
+ (id)getAVCCKeyFromAVAsset:(id)a0;
+ (id)getiOSProfileFromAVAsset:(id)a0;
+ (id)getProfileFromAVAsset:(id)a0;
+ (BOOL)isH264Video:(id)a0;
+ (BOOL)isByteVC1Video:(id)a0;
+ (BOOL)convert2AVMetadataFormat:(id)a0 metadata:(id)a1;

@end
