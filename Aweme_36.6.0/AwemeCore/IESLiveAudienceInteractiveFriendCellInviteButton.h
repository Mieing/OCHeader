@class UILabel, UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveAudienceInteractiveFriendCellInviteButton : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *imageView;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) id /* block */ didClick;

- (void)updateType:(unsigned long long)a0;
- (void)p_didClick;
- (void).cxx_destruct;
- (id)init;
- (void)layoutUI;

@end
