@class AWELiveShareCouponViewController, AWEShareContext, NSString, NSValue, UIViewController;
@protocol AWESharePanel;

@interface AWELiveSharePanelLocalLifeViewExtension : NSObject <AWESharePanelViewExtension, AWELiveShareCouponVCDelegate>

@property (weak, nonatomic) AWEShareContext *context;
@property (weak, nonatomic) UIViewController<AWESharePanel> *sharePanel;
@property (retain, nonatomic) AWELiveShareCouponViewController *shareCouponVC;
@property (nonatomic) BOOL hasShown;
@property (retain, nonatomic) NSValue *tempLynxViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEvent:(id)a0 param:(id)a1;
- (void)sharePanelWillAppear:(id)a0;
- (void)sharePanelDidAppear:(id)a0;
- (id)getSharePanelInfoWithContext:(id)a0;
- (void)didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)getSharePanelExtraLogWithContext:(id)a0;
- (id)shareCouponVCInitBaseData:(id)a0 context:(id)a1;
- (id)getLifeShareShowTrackParamsWithPanelInfo:(id)a0 extraLog:(id)a1;
- (void).cxx_destruct;
- (void)updateWithContext:(id)a0;

@end
