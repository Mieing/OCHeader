@class NSArray, NSString;

@interface BDPSwitch : UISwitch <BDPAppearance, BDPAppearanceStyleMessage>

@property (copy, nonatomic) id /* block */ switchBlock;
@property (copy, nonatomic) NSArray *bdp_styleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)bdp_styleForCategory:(id)a0;
+ (void)applyAppearanceStyle;

- (void)setupAction;
- (void)onSwitchClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
