@class UILabel, UIImageView, UIColor;
@protocol IESLiveAudioSeatViewModelOutputForAll;

@interface IESLiveAudioEmptyAvatarView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *joinImage;
@property (retain, nonatomic) UIImageView *lockedImageView;
@property (retain, nonatomic) UIImageView *guestBattleImageView;
@property (retain, nonatomic) UIImageView *dynamicImageView;
@property (retain, nonatomic) UIColor *bgColor;
@property (weak, nonatomic) id<IESLiveAudioSeatViewModelOutputForAll> viewModel;

- (void)updateHiddenWithType:(long long)a0;
- (void)updateJoinUrls;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
