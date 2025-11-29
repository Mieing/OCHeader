@interface WxamImageConvert : NSObject

+ (id)encodeUIImageToWxAM:(id)a0 preferQP:(int)a1 scene:(unsigned long long)a2;
+ (id)encodeToWxAM:(id)a0 preferQP:(int)a1 scene:(unsigned long long)a2;
+ (id)encodeToWxAM:(id)a0 preferQP:(int)a1 scene:(unsigned long long)a2 newTool4:(int)a3;
+ (id)encodeRgbaToWxAM:(id)a0 preferQP:(int)a1 scene:(unsigned long long)a2 srcW:(int)a3 srcH:(int)a4 newTool3:(int)a5 aigcData:(id)a6;
+ (id)encodeToWxAM:(id)a0 preferQP:(int)a1 scene:(unsigned long long)a2 useWxAM3:(BOOL)a3;
+ (id)encodeToWxAM:(id)a0 preferQP:(int)a1 srcW:(int)a2 srcH:(int)a3 scene:(unsigned long long)a4 useWxAM3:(BOOL)a5 newTool2:(int)a6 newTool3:(int)a7 newTool4:(int)a8 isRgba:(BOOL)a9 aigcData:(id)a10;
+ (id)decodeWxAMToHeif:(id)a0 scene:(unsigned long long)a1;
+ (id)decodeWxAMToJpg:(id)a0 scene:(unsigned long long)a1;
+ (id)decodeWxAM:(id)a0 picType:(unsigned int)a1 scene:(unsigned long long)a2;
+ (BOOL)encodePicToWxAM:(id)a0 wxamPath:(id)a1 scene:(unsigned long long)a2;
+ (BOOL)encodePicToWxAM:(id)a0 wxamPath:(id)a1 scene:(unsigned long long)a2 newTool:(int)a3;
+ (BOOL)isWxamFormat:(id)a0;
+ (BOOL)isWxamFormatData:(id)a0;
+ (BOOL)isWxamWithP3:(id)a0;
+ (BOOL)decodeWxAmToPic:(id)a0 wxamPath:(id)a1 scene:(unsigned long long)a2;
+ (BOOL)decodeWxAmToPic:(id)a0 wxamPath:(id)a1 picType:(unsigned int)a2 scene:(unsigned long long)a3;
+ (id)covertWxAmToPicShuffle:(id)a0 useWxDecrypt:(BOOL)a1 scene:(unsigned long long)a2;

@end
