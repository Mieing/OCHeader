@class UIImageView, UIView, HTSLiveAmazingBackgroundView, UIButton;
@protocol IESLiveWebPPlayer;

@interface IESLivePlayBackOwnerContainerView : UIView

@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *followMotionPlayer;
@property (nonatomic) BOOL isFollow;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIButton *ownerNameButton;
@property (retain, nonatomic) UIImageView *authenticationIconImageView;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *btnContainer;

- (id)buttonBackgroundColors;
- (void)playFollowAnimWithAnim:(BOOL)a0;
- (void)updateOwnerContainerFrame:(BOOL)a0;
- (void)updateFollowButtonWithAnim:(BOOL)a0 isFollow:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (id)createButton;

@end
