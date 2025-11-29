@class UILabel, UIImageView, NSString;

@interface AWEFollowListUserListHeaderFilterView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
