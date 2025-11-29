@class UIView, WCFinderHeadImageView, WCFinderAuthInfoIconView, UILabel, UIImageView, MMUIButton;
@protocol WCFinderMusicAuthorViewDelegate;

@interface WCFinderMusicAuthorView : UIView

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UILabel *friendViewInfoLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUIButton *followBtn;
@property (retain, nonatomic) UIView *topSeparateLine;
@property (retain, nonatomic) UIView *bottomSeparateLine;
@property (weak, nonatomic) id<WCFinderMusicAuthorViewDelegate> delegate;

+ (id)buildFriendDescLabel:(double)a0;
+ (id)getFriendDataStringByFriendData:(id)a0;
+ (double)heightOfAuthorView:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFollowBtnState:(BOOL)a0;
- (void)updateAuthorViewWithTopicInfo:(id)a0;
- (void)layoutAllSubviews;
- (void)onClickOutterFollowBtn;
- (void)onClickTagAuthorView;
- (void).cxx_destruct;

@end
