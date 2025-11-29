@class NSDictionary, NSArray;

@interface IESLiveExecutionConfig : NSObject

@property (readonly, nonatomic) NSDictionary *pipelineConfigs;
@property (readonly, nonatomic) NSArray *injectionConfigs;

- (id)initWithPipelineConfigs:(id)a0 injectionConfigs:(id)a1;
- (void).cxx_destruct;

@end
