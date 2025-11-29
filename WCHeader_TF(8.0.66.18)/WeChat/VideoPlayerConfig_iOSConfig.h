@class NSMutableArray;

@interface VideoPlayerConfig_iOSConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL throttled;
@property (nonatomic) float minBufferLength;
@property (nonatomic) float maxBufferLength;
@property (nonatomic) float downloadGrading;
@property (nonatomic) float preloadSec;
@property (retain, nonatomic) NSMutableArray *arrBufferTime;

+ (void)initialize;

@end
