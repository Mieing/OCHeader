@class NSString, UIImageView, IESECLiveReplayDataStore, UILabel, IESECLiveFollowAnimatedButton, UIButton;

@interface IESECLiveReplayNewAvatarComponentView : UIView <IESECLiveReplayComponentViewProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIButton *avatarButton;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) IESECLiveFollowAnimatedButton *followButton;
@property (retain, nonatomic) UIButton *hasFollowedButton;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFollow;
- (void)addSubviews;
- (void)playFollowAnimation;
- (void)dataStoreChanged;
- (void)followStatusChange;
- (void)followClick;
- (double)nameWidth;
- (double)followWidth;
- (double)unFollowWidth;
- (void)playFollowAnimationInView:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (double)width;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
