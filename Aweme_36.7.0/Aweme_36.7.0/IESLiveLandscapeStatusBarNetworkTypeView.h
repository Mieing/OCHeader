@class UILabel, UIImageView;

@interface IESLiveLandscapeStatusBarNetworkTypeView : UIView

@property (retain, nonatomic) UILabel *cellularTypeLabel;
@property (retain, nonatomic) UIImageView *WiFiImageView;
@property (retain, nonatomic) UIImageView *cellularImageView;

- (void)hideNetworkTypeView;
- (void)showNetworkTypeView;
- (void)_configSubview;
- (void)_updateNetworkTypeView;
- (id)_currentCarrierNetworkType;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_handleReachabilityChangedNotification:(id)a0;

@end
