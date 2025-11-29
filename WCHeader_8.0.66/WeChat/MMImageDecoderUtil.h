@interface MMImageDecoderUtil : NSObject

+ (id)errorWithCode:(long long)a0 message:(id)a1;
+ (id)errorWithCode:(long long)a0 message:(id)a1 subCode:(long long)a2;
+ (void)transferHevcDataFrom:(id)a0 completionHandler:(id /* block */)a1;
+ (id)imageFromWXAMData:(id)a0 error:(id *)a1;
+ (id)imageOfFrame:(struct StWxAMFrame { char *x0[4]; unsigned long long x1[4]; int x2; int x3; int x4; int x5; int x6; int x7; char *x8; int x9; int x10; char *x11; } *)a0 scale:(double)a1;
+ (id)regionImgOfPNG:(id)a0 nX:(int)a1 nY:(int)a2 width:(int)a3 height:(int)a4;
+ (int)SplitPngImg:(id)a0 width:(int)a1 height:(int)a2 callback:(id /* block */)a3;
+ (int)SplitPngImg:(id)a0 width:(int)a1 height:(int)a2 context:(void *)a3;
+ (id)getKeyFromPNGImageData:(id)a0 key:(id)a1;
+ (id)writeKeyValueToPNGImageData:(id)a0 key:(id)a1 value:(id)a2;

@end
