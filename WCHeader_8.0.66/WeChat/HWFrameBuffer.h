@class NSData, NSMutableArray;

@interface HWFrameBuffer : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *rawBuf;
@property (nonatomic) int samplesCount;
@property (retain, nonatomic) NSMutableArray *timeInfo;
@property (retain, nonatomic) NSMutableArray *sampleSize;

+ (void)initialize;

@end
