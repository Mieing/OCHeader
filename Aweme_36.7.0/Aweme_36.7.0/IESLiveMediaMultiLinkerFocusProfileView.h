@class UILabel, IESLiveImageView, IESLiveButton;

@interface IESLiveMediaMultiLinkerFocusProfileView : UIView

@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) IESLiveButton *followButton;
@property (retain, nonatomic) IESLiveImageView *muteImageView;
@property (copy, nonatomic) id /* block */ followBlock;

- (void)onFollowButtonClicked;
- (id)initWithDIContext:(id)a0 user:(id)a1;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateUserInfo:(id)a0;

@end
