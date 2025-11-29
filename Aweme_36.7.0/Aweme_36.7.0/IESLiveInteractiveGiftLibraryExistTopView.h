@class NSString, UIImageView, UILabel, UIButton;

@interface IESLiveInteractiveGiftLibraryExistTopView : UIView

@property (retain, nonatomic) UILabel *mainText;
@property (retain, nonatomic) UILabel *hintText;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *backButtonImg;
@property (retain, nonatomic) NSString *hintTextString;
@property (copy, nonatomic) id /* block */ backAction;

- (void)backButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpView;

@end
