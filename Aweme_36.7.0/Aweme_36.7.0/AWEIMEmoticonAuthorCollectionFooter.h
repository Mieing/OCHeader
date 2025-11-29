@class UIButton, NSString, UIImage;

@interface AWEIMEmoticonAuthorCollectionFooter : UICollectionReusableView

@property (retain, nonatomic) UIButton *gotoHomePageButton;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *tipImage;
@property (copy, nonatomic) id /* block */ didClickFooter;

- (void)__didClickGoToHomePage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
