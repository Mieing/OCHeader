@interface AudioCodecFactory : NSObject

+ (id)createCodecWithType:(int)a0;
+ (id)createCodecWithType:(int)a0 sampleRate:(double)a1;

@end
