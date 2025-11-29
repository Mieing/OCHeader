@class MMUILabel, MMFinderLiveAudioRoomMicAudioAnimationView, WCFinderHeadImageView, MMLiveTaskId, NSString, MMFinderLiveTask, MMFinderLiveKTVSingerUserInfo;

@interface MMFinderLiveKTVSingerAudioUserView : UIView <MMFinderLiveKTVLogicExt, MMFinderLiveKTVStateExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMFinderLiveKTVSingerUserInfo *userInfo;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *waveAnimationView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *heatLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferExtraHeight;

- (id)initWithSingerUserInfo:(id)a0 taskId:(id)a1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutHeadImageView;
- (void)layoutWaveAnimationView;
- (void)layoutNameLabel;
- (void)updateNameLabelOrigin;
- (void)layoutHeatLabel;
- (void)updateHeatLabelOrigin;
- (void)updateNameLabelText;
- (void)updateHeatLabelText;
- (void)onSingingStateChanged:(long long)a0;
- (BOOL)isNickAndHeatNeedShow;
- (double)getHeadImageViewRadiusWithHeight:(double)a0;
- (void)updateIsSinging:(BOOL)a0;
- (void)updateSingerUserInfo:(id)a0;
- (void)onLiveKTVNoteReached:(BOOL)a0 singerUserId:(id)a1 taskId:(id)a2;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 singStateChanged:(long long)a2;
- (void).cxx_destruct;

@end
