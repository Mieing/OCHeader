@class UILabel, UIView;

@interface AWEFeedNearbyMallCardHeaderView : UIView

@property (retain, nonatomic) UIView *typeView;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) id /* block */ tapHandle;

- (void)__setupUI;
- (void)__buildUI;
- (void)__addAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
