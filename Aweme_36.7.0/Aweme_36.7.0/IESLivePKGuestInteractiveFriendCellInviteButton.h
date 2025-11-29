@class UILabel, IESLiveAnimatedImageView;

@interface IESLivePKGuestInteractiveFriendCellInviteButton : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IESLiveAnimatedImageView *imageView;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) id /* block */ didClick;

- (void)updateType:(unsigned long long)a0;
- (void)p_didClick;
- (void).cxx_destruct;
- (id)init;
- (void)layoutUI;

@end
