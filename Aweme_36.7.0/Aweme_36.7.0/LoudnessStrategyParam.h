@class NSString;

@interface LoudnessStrategyParam : NSObject

@property (nonatomic) int loudNormAlgoType;
@property (retain, nonatomic) NSString *metaData;
@property (retain, nonatomic) NSString *deviceAiData;
@property (retain, nonatomic) NSString *audioDumpPath;

- (void)dealloc;

@end
