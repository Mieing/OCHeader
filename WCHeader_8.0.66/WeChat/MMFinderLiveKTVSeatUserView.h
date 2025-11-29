@class NSString, WCFinderContact, MMFinderLiveConnectMicUser, MMLiveTaskId, MMFinderLiveTask, MMFinderLiveAudioRoomMicAudioAnimationView, WCFinderHeadImageView, MMUILabel;

@interface MMFinderLiveKTVSeatUserView : UIView <MMFinderLiveKTVSeatUserUIChangeExt>

@property (retain, nonatomic) MMFinderLiveConnectMicUser *userInfo;
@property (readonly, nonatomic) WCFinderContact *finderContact;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) WCFinderHeadImageView *userHeadImageView;
@property (retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *waveAnimationView;
@property (retain, nonatomic) MMUILabel *tagLabel;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) MMUILabel *heatLabel;
@property (nonatomic) BOOL isTalking;
@property (nonatomic) BOOL isPreparing;
@property (nonatomic) int score;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferWidth;
+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)getUserAvatarView;
- (void)layoutUserHeadImageView;
- (void)layoutWaveAnimationView;
- (void)layoutTagLabel;
- (void)updateTagLabelOrigin;
- (void)layoutNickNameLabel;
- (void)updateNickNameLabelOrigin;
- (void)layoutHeatLabel;
- (void)updateHeatLabelOrigin;
- (BOOL)isUserAnchor;
- (void)refreshTagLabelUI;
- (void)updateTagLabelText;
- (void)updateHeatLabelText;
- (void)updateNickNameLabelText;
- (BOOL)isCurrentTalking;
- (void)updateUserInfo:(id)a0;
- (void)updateIsPreparing:(BOOL)a0;
- (void)updateScore:(int)a0;
- (void)checkIsTalking;
- (void)onLiveKTVSeatUserUIChange:(unsigned long long)a0 taskId:(id)a1;
- (void).cxx_destruct;

@end
