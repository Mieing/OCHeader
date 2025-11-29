@class NSString;

@interface AWEOuterTestAdapterIMP : NSObject <IESOuterTestApplogAdapter, IESOuterTestALogAdapter, IESOuterTestToastAdapter, IESOuterTestImageAdapter, IESOuterTestRouterAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didThemeChanged;
- (void)outerTestTrackEvent:(id)a0 params:(id)a1;
- (void)outerTestLogString:(id)a0;
- (void)outerTestShowToast:(id)a0 duration:(double)a1;
- (void)outerTestLoadImageForView:(id)a0 withImageURLs:(id)a1 placeholderImage:(id)a2;
- (void)outerTestCancelLoadImageForView:(id)a0;
- (BOOL)outerTestOpenSchema:(id)a0;
- (void)outerTestOpenFeedback;
- (void)outerTestPopupInviteWithViewModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)outerTestPopupTFExpireWithViewModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)outerTestPopupFirstInstallGuideWithViewModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
