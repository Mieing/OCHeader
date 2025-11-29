@class NSMutableDictionary, UIImageView, IESECGoodsDetailTimeCountdownView, UILabel, IESECGoodsFeedCommonGirdleRightComponent;

@interface IESECGoodsFeedCommonGirdleComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *leftLogoImageView;
@property (retain, nonatomic) UILabel *rightSloganTextLabel;
@property (retain, nonatomic) IESECGoodsDetailTimeCountdownView *countDownView;
@property (nonatomic) long long showComponentOptions;
@property (retain, nonatomic) NSMutableDictionary *rightComponentCache;
@property (retain, nonatomic) IESECGoodsFeedCommonGirdleRightComponent *rightComponent;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;
+ (double)bottomOverlapHeight;

- (void)updateWithParameters:(id)a0;
- (void)updateRightContainer;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)handleActivityUpdateNotification:(id)a0;
- (id)rightComponentForType:(long long)a0 withParameters:(id)a1;
- (void)setComponentsShowStateWithModel:(id)a0;
- (void)configLeftLogoImageViewWithModel:(id)a0;
- (void)configCountViewWithActivityManager:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
