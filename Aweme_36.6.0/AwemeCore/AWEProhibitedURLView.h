@class UITapGestureRecognizer, NSString, UIImageView, UILabel, UIButton;
@protocol AWEProhibitedURLViewDelegate;

@interface AWEProhibitedURLView : UIView <AWEProhibitedURLViewProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *hintButton;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *linkText;
@property (weak, nonatomic) id<AWEProhibitedURLViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)onButtonClicked;
- (void)configUI:(BOOL)a0 showHintButton:(BOOL)a1 showRightArrow:(BOOL)a2;
- (void)jumpToNoticeDetail;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hintLabelFont;

@end
