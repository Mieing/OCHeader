@class UILabel, UIView;

@interface AWEEntertainmentVideoHavePermissionTagView : UIView

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UILabel *havePermissionLabel;

- (void)updateTagText:(id)a0;
- (void)updateTagTextColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateBackgroundColor:(id)a0;

@end
