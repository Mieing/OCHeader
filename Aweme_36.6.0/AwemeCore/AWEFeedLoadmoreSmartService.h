@class NSString;

@interface AWEFeedLoadmoreSmartService : AWEBaseSmartServiceImpl <AWEFeedLoadmoreSmartService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)onWillRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (BOOL)injectTruthForData:(id)a0 withInput:(id)a1 ext:(id)a2;

@end
