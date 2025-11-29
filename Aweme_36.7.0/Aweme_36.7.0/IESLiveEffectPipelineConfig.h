@interface IESLiveEffectPipelineConfig : NSObject

@property (nonatomic) BOOL disableEffectCommunication;
@property (nonatomic) BOOL disableDistribution;
@property (nonatomic) BOOL disableBizPipeline;

- (id)init;

@end
