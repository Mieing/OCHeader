@class NSString;
@protocol AWEIMEmoticonDisplayViewControllerConfigProtocol;

@interface AWEIMMessageListFindSimilarComponent : AWEIMComponentBase <AWEIMMessageListFindSimilarInterface, AWEIMHalfScreenContainerVCDelegate, AWEIMSendSimilarEmoticonProtocol, AWEIMComponentLazyCreate>

@property (retain, nonatomic) id<AWEIMEmoticonDisplayViewControllerConfigProtocol> configContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (void)trackEnterSimilarDisplayWithConfig:(id)a0;

- (double)minContainerHeightRatioInHalfScreenContainerVC:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)getEmoticonDisplayViewControllerWithConfig:(id)a0;
- (void)showEmoticonDisplayViewControllerWithConfig:(id)a0;
- (BOOL)enableShowSimilarEmoticonWithMessage:(id)a0;
- (void)showSimilarEmoticonWithMessage:(id)a0 triggerType:(unsigned long long)a1;
- (void)didSendSimilarEmoticonWithModel:(id)a0 inTheme:(id)a1 context:(id)a2;
- (void)didSendSubscribeEmoticonWithModel:(id)a0 inTheme:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
