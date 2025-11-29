@class UIButton, NSString;
@protocol LunaNavigatorButtonDelegate;

@interface LunaNavigatorButton : UIView

@property (retain, nonatomic) UIButton *dark;
@property (retain, nonatomic) UIButton *light;
@property (retain, nonatomic) NSString *darkName;
@property (retain, nonatomic) NSString *lightName;
@property (retain, nonatomic) NSString *accessibility;
@property (weak, nonatomic) id<LunaNavigatorButtonDelegate> delegate;

- (void)onBackButtonClicked;
- (void)changeToDark:(BOOL)a0 themeChanged:(BOOL)a1 progress:(double)a2;
- (id)initWith:(id)a0 darkName:(id)a1 accessibility:(id)a2;
- (id)p_makeBackButtonWithImageName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
