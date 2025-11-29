@class NSString;

@interface SAMICore_PostProcessLoudnessStrategyParameter : NSObject

@property (retain, nonatomic) NSString *metaData;
@property (retain, nonatomic) NSString *deviceAiData;
@property (retain, nonatomic) NSString *audioDumpPath;
@property (nonatomic) int loudNormAlgoType;

- (void)dealloc;

@end
