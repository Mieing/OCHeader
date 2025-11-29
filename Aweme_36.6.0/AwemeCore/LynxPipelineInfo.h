@class NSString;

@interface LynxPipelineInfo : NSObject

@property (copy, nonatomic) NSString *url;
@property (readonly, nonatomic) long long pipelineOrigin;

- (void)addPipelineOrigin:(long long)a0;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0;

@end
