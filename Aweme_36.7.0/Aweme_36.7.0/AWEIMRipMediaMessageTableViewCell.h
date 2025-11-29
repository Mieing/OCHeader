@class UIImageView, UIView;

@interface AWEIMRipMediaMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) UIView *displayBoxView;
@property (retain, nonatomic) UIImageView *displayMarkView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (struct CGSize { double x0; double x1; })p_calculateBoxSizeWithRipMediaMessage:(id)a0;
+ (id)identifier;

- (id)menuTargetView;
- (struct CGSize { double x0; double x1; })p_calculateBoxSizeWithSelfMessage;
- (void)p_trackRipCellShow;
- (void)trackRipCellShowIfNeeded;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
