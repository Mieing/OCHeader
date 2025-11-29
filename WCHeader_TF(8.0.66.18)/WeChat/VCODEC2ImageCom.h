@interface VCODEC2ImageCom : NSObject

+ (unsigned long long)decodeVCODEC2ImageFile:(id)a0 toUIImage:(id *)a1;
+ (id)decodeVCODEC2ImageFile:(id)a0;
+ (unsigned long long)decodeVCODEC2ImageFile:(id)a0 toUIImage:(id *)a1 toJPGQuality:(int *)a2;
+ (id)constructImg:(void *)a0 width:(int)a1 height:(int)a2;

@end
