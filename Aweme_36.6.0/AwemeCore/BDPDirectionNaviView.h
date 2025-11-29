@class UIButton, CAGradientLayer;
@protocol BDPDirectionNaviViewDelegate;

@interface BDPDirectionNaviView : UIView

@property (retain, nonatomic) UIButton *drivingItem;
@property (retain, nonatomic) UIButton *walkingItem;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIButton *backBtn;
@property (weak, nonatomic) id<BDPDirectionNaviViewDelegate> delegate;

- (void)setCurrentTransportType:(long long)a0;
- (void)hideNavigationItems;
- (void)onClickBackItem;
- (void)onClickDrivingItem;
- (void)onClickWalkingItem;
- (void)showNavigationItems;
- (void)updateDrivingItem:(id)a0;
- (void)updateWalkingItem:(id)a0;
- (void)hideWalkingItem;
- (void)hideDrivingItem;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;

@end
