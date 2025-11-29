@class NSString, BDXRLPipeline;

@interface BDXRLTask : NSObject <BDXResourceLoaderTaskProtocol>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) BDXRLPipeline *loaderPipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)cancelTask;

@end
