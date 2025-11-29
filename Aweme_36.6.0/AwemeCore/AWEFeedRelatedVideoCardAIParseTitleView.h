@class UIImageView, UILabel;

@interface AWEFeedRelatedVideoCardAIParseTitleView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;

- (double)textFontSize;
- (id)defaultUIConfig;
- (double)iconSize;
- (void).cxx_destruct;
- (id)titleText;
- (id)iconURL;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
