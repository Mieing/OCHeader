@class UILabel, NSString, UIView;
@protocol AWESettingSwitchProtocol;

@interface AWEProfileToggleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *toggle;
@property (nonatomic) BOOL toggleIsOn;
@property (nonatomic) BOOL isModelView;
@property (nonatomic) BOOL isCardUIStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ toggleBlock;

- (id)initWithTitle:(id)a0 isOn:(BOOL)a1 isCardUIStyle:(BOOL)a2 isModelView:(BOOL)a3 toggleBlock:(id /* block */)a4;
- (void)toggleSwitched:(id)a0;
- (id)initWithTitle:(id)a0 isOn:(BOOL)a1 isModelView:(BOOL)a2 toggleBlock:(id /* block */)a3;
- (void)updateToggleState:(BOOL)a0;
- (void)updateToggleTitle:(id)a0;
- (void).cxx_destruct;
- (BOOL)toggleState;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
