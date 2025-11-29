@class NSString;

@interface IESLivePipelineStepConfig : NSObject

@property (readonly, nonatomic) NSString *moduleName;
@property (readonly, nonatomic) BOOL isAsync;

- (id)initWithModule:(id)a0 isAsync:(BOOL)a1;
- (void).cxx_destruct;

@end
