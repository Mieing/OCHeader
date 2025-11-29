@interface FaceLiveUtils : NSObject

+ (id)getResource:(id)a0 resName:(id)a1;
+ (id)convertRawBufferToImage:(char *)a0 imageName:(id)a1 cols:(int)a2 rows:(int)a3 saveImage:(BOOL)a4;
+ (id)convertRawBufferToImage:(char *)a0 imageName:(id)a1 cols:(int)a2 rows:(int)a3 bgra2rgba:(BOOL)a4 saveImage:(BOOL)a5;
+ (id)convertRawBufferToPNGImage:(char *)a0 imageName:(id)a1 cols:(int)a2 rows:(int)a3 saveImage:(BOOL)a4;
+ (id)sortedRandomArrayByArray:(id)a0;
+ (id)packData:(id)a0 newCryptType:(BOOL *)a1;
+ (id)buildFaceCompareSDKDataWithParams:(id)a0;
+ (id)smashLiveModelName;
+ (id)smashSdkVersion;

@end
