@class NSString;

@interface AWEFeedPreRenderSmartService : AWEBaseSmartServiceImpl <AWEFeedPreRenderSmartService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onWillRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (double)delayPreRenderOffset;
- (id)feedSmartPreRenderConfig;

@end
