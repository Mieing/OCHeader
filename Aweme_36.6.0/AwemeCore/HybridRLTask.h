@class NSString, HybridRLPipeline;

@interface HybridRLTask : NSObject <HybridResourceLoaderTaskProtocol>

@property (retain, nonatomic) HybridRLPipeline *loaderPipeline;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)cancelTask;

@end
