@class AWELongPressPanelBaseViewModel, CAShapeLayer, UIImageView, LOTAnimationView, UIView, UILabel, AFDColorRingView;

@interface AWELongPressPanelSettingCell : UITableViewCell

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) LOTAnimationView *livingAnimView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIView *leftSubView;
@property (retain, nonatomic) UIView *rightSubView;
@property (retain, nonatomic) UIView *totalView;
@property (retain, nonatomic) AFDColorRingView *colorRingView;
@property (retain, nonatomic) AWELongPressPanelBaseViewModel *longPressPanelVM;
@property (retain, nonatomic) CAShapeLayer *contentShapeLayer;
@property (nonatomic) BOOL awe_disabled;

+ (Class)aAWEPadBizUIAdapterClass;

- (id)aAWEPadBizUIAdapter;
- (void)shareDailyImageDynamic;
- (void)setDefaultUI:(id)a0;
- (void)setDisableUI:(BOOL)a0;
- (BOOL)enableLppCellImgViewReuseFix;
- (void)adsEvaluationAddPopover:(id)a0;
- (BOOL)isLongPressPanelDynamicShowOneDayLater;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setUpUI;

@end
