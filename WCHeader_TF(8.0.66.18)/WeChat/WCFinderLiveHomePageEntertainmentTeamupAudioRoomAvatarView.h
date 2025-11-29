@class UIColor, MMFinderLiveAudioRoomMicAudioAnimationView, UIImageView, WCFinderLiveHomePageEntertainmentTeamupAudioRoomAvatarInfo, UIView;

@interface WCFinderLiveHomePageEntertainmentTeamupAudioRoomAvatarView : WCFinderLiveHomePageEntertainmentTeamupAvatarView

@property (retain, nonatomic) UIView *imageContainerView;
@property (retain, nonatomic) UIView *cameraContainerView;
@property (retain, nonatomic) UIImageView *cameraImageView;
@property (retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *audioAnimationView;
@property (nonatomic) BOOL userIsTalking;
@property (retain, nonatomic) UIColor *audioWaveColor;
@property (readonly, nonatomic) WCFinderLiveHomePageEntertainmentTeamupAudioRoomAvatarInfo *info;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithInfo:(id)a0;
- (void)updateUserCameraOn:(BOOL)a0;
- (void)updateCameraViewState;
- (void)prepareForReuse;
- (void)updateUserIsTalking:(BOOL)a0;
- (void)setHidden:(BOOL)a0;
- (void)updateAudioWaveColor:(id)a0;
- (void)layoutSubviews;
- (double)cameraContainerSize;
- (double)cameraImageSize;
- (void)layoutAudioAnimationView;
- (void).cxx_destruct;

@end
