@class UILabel, UIImageView;

@interface AWELandscapeStatusBarNetworkTypeView : UIView

@property (retain, nonatomic) UILabel *cellularTypeLabel;
@property (retain, nonatomic) UIImageView *WiFiImageView;
@property (retain, nonatomic) UIImageView *cellularImagView;

- (void)__configSubview;
- (void)hideNetworkTypeView;
- (void)__updateNetworkTypeView;
- (void)__handleReachabilityChangedNotification:(id)a0;
- (id)__currentCarrierNetworkType;
- (void)showNetworkTypeView;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)init;
- (void)dealloc;

@end
