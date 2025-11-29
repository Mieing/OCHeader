@class NSString, AWEIMDiskFullPopupView;

@interface AWEIMMessageTabDiskFullCleanPopupComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewProtocol, AWEForceAlertProtocol>

@property (weak, nonatomic) AWEIMDiskFullPopupView *popup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (id)forceAlertIDForEvent:(id)a0;
- (unsigned long long)forceAlertViewStyleForEvent:(id)a0;
- (void)forceShowWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)forceDismissWithCallTrace:(id)a0;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (BOOL)canShowPopupView;
- (void)showPopupView;
- (void).cxx_destruct;

@end
