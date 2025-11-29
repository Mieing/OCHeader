@class IESLiveAnchorPFListItem, IESLiveCountTimer, IESLiveAnchorPFStateModel, IESLiveAnchorPFStateView, NSString;

@interface IESLiveAnchorPFBizMicrophoneProcess : IESLiveAnchorPFBaseProcess <IESLiveAnchorPFStateObserver, IESLiveAnchorPFListObserver>

@property (retain, nonatomic) IESLiveAnchorPFStateView *microphoneView;
@property (retain, nonatomic) IESLiveAnchorPFStateModel *microphoneModel;
@property (retain, nonatomic) IESLiveAnchorPFListItem *microphoneItem;
@property (nonatomic) BOOL hasShowMicrophoneInterruptPush;
@property (nonatomic) BOOL hasShowMicrophoneErrorPush;
@property (retain, nonatomic) IESLiveCountTimer *audioPunishTimer;
@property (nonatomic) BOOL screencastLivePerfOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProcess;
- (void)bindAction;
- (long long)audioPunishRemainTime;
- (void)endProcess;
- (void)displayAudioPunish;
- (void)pfListViewDidAppear;
- (void)pfListViewDidDisAppear;
- (id)pfService;
- (id)pfListService;
- (void)microphoneStateDidChange:(long long)a0;
- (void)setupMicrophoneModel;
- (void)setupMicrophoneItem;
- (void)stopAudioPunishTimer;
- (void)displayAudioPunishIfNeeded;
- (void)cleanMicrophoneView;
- (void)updateMicrophoneModelWithState:(long long)a0;
- (void)updateMicrophoneViewIfNeeded;
- (void)hintForMicrophoneState:(long long)a0;
- (void)showPushWithIcon:(id)a0 title:(id)a1;
- (void)setupMicrophoneView;
- (void)updateMicrophoneView;
- (void)updateVideoMicrophoneModelWithState:(long long)a0;
- (void)updateAudioMicrophoneModelWithState:(long long)a0;
- (void)updateScreenshotMicrophoneModelWithState:(long long)a0;
- (void)updateMicrophoneViewWithPunishTime:(long long)a0;
- (void).cxx_destruct;

@end
