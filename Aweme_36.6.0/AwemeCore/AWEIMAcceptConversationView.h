@class UIStackView, NSArray, UILabel, UIView;
@protocol AWEIMAcceptConversationViewDelegate;

@interface AWEIMAcceptConversationView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIStackView *buttonStack;
@property (retain, nonatomic) NSArray *buttonArray;
@property (nonatomic) BOOL isSetup;
@property (weak, nonatomic) id<AWEIMAcceptConversationViewDelegate> delegte;

- (void)handleMenuBtnClick:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;
- (id)createButton;

@end
