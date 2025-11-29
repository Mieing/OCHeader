@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWESearchWebNavigationSearchBar : UIView

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UILabel *placeHolderTextLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *voiceOverPlaceHolder;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) NSString *recommendWord;
@property (nonatomic) double rightBtnTextWidth;
@property (copy, nonatomic) id /* block */ rightButtonClickBlock;

- (void)forceDarkStyle;
- (void)rightButtonClicked;
- (id)searchDefaultSearchWord;
- (void)updateWithSearchWord:(id)a0;
- (void)forceLightStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (void)updateWithText:(id)a0;

@end
