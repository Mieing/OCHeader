@class UIImageView, AWEIMMessageSendProgressView, UILabel, UIView, NSMutableArray;

@interface AWEIMMsgStateView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *avatarListView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEIMMessageSendProgressView *sendingProgress;
@property (retain, nonatomic) NSMutableArray *displayedAvatars;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)configWithModel:(id)a0;
- (void)addSubviews;
- (id)initWithTapGestureAndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showSendingProgressView:(BOOL)a0;
- (void)updateSendingProgress:(double)a0;
- (void)p_viewDidTapped;
- (void)removeRotateAnimation;
- (void).cxx_destruct;
- (id)displayText;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
