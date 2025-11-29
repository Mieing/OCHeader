@class UIButton;

@interface ACCBeautySideEntranceView : UIView

@property (retain, nonatomic) UIButton *adjustBeautyBtn;
@property (retain, nonatomic) UIButton *closeBeautyBtn;
@property (retain, nonatomic) UIButton *openBeautyBtn;
@property (copy, nonatomic) id /* block */ adjustBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ openBlock;

- (void)updateBeautySwitchStatus:(BOOL)a0;
- (void)updateButtonVisibleStatus:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adjustBlock:(id /* block */)a1 closeBlock:(id /* block */)a2 openBlock:(id /* block */)a3;
- (void)adjustBeautyClicked:(id)a0;
- (void)closeBeautyClicked:(id)a0;
- (void)openBeautyClicked:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
