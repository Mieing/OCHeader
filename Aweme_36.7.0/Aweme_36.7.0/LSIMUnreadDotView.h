@class UILabel;

@interface LSIMUnreadDotView : UIView

@property (retain, nonatomic) UILabel *dotLabel;
@property (nonatomic) long long count;
@property (nonatomic) double unreadDotHeight;
@property (nonatomic) BOOL shouldDisablePlus;

- (void)_appear;
- (void)setDotTextColor:(id)a0;
- (void)setDotFont:(id)a0;
- (void)_disappear;
- (double)getDotHeight;
- (void)updateWithNewCount:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithCount:(long long)a0;
- (void)setDotColor:(id)a0;

@end
