@class UIImageView, UILabel, NSString;

@interface AWEPureModePageLongPressLockGuideView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSString *text;

- (void)showOnView:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
