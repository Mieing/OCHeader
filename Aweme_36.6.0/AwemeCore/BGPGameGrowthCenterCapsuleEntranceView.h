@class UIImageView, NSString;

@interface BGPGameGrowthCenterCapsuleEntranceView : UIView

@property (retain, nonatomic) UIImageView *levelIconView;
@property (nonatomic) long long theme;
@property (retain, nonatomic) NSString *titleStr;
@property (nonatomic) double titleWidth;
@property (readonly, nonatomic) double maxWidth;

- (void)updateAlpha:(double)a0;
- (void)updateIcon:(id)a0;
- (id)initWithTheme:(long long)a0 icon:(id)a1 title:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
