@class UIView, MMWebImageView, MMLiveStorageCleanupPinningToken, WCFinderAnimationLoadingView, MMLiveTaskId, MMFinderLiveTask, UIButton, MMFinderLiveTaskId, MMUILabel, MMFinderLiveKSKitMusicSong, MMTimer;

@interface MMFinderLiveKTVPrepareGuidePanel : MMPageSheetBaseView

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) MMWebImageView *songCoverImgView;
@property (retain, nonatomic) MMUILabel *songNameLabel;
@property (retain, nonatomic) MMUILabel *artistNameLabel;
@property (retain, nonatomic) MMUILabel *durationLabel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) MMUILabel *loadingLabel;
@property (retain, nonatomic) UIButton *startButton;
@property (retain, nonatomic) UIButton *giveupButton;
@property (nonatomic) unsigned int countDownSecond;
@property (retain, nonatomic) MMTimer *countDownTimer;
@property (readonly, nonatomic) unsigned int initCountDownSecond;
@property (retain, nonatomic) MMFinderLiveKSKitMusicSong *songData;
@property (nonatomic) BOOL isSongNotifyToPlay;
@property (readonly, nonatomic) BOOL isPrepared;
@property (nonatomic) BOOL isSingSessionPrepared;
@property (nonatomic) BOOL isSingSessionConnecting;
@property (nonatomic) BOOL isSongResPrepared;
@property (nonatomic) BOOL isSongResDownloading;
@property (nonatomic) BOOL isGiveUp;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *songResourcesPinningToken;
@property (copy, nonatomic) id /* block */ prepareFinishCallback;

+ (id)genFormatDuraionTimeStringFrom:(int)a0;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setupPageSheetConfig;
- (void)initDefaultData;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutTipLabel;
- (void)updateTipLabelText;
- (void)updateTipLabelOrigin;
- (void)layoutSongCoverImgView;
- (void)layoutSongNameLabel;
- (void)updateSongNameLabelOrigin;
- (void)layoutArtistNameAndDurationLabels;
- (void)updateArtistNameAndDurationLabelsOrigin;
- (void)layoutGiveupButton;
- (void)giveupButtonAction;
- (void)layoutStartButton;
- (void)startButtonAction;
- (void)updateStartBtnText;
- (BOOL)needShowRetryTip;
- (void)layoutLoadingWidgets;
- (void)updateLoadingState;
- (BOOL)needShowLoading;
- (void)showWithAnimated:(BOOL)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onCurrSongItemBasicInfoUpdated;
- (void)onCurrSongNameUpdated;
- (void)updateDatas;
- (void)startCountDown;
- (void)onCountDown;
- (void)stopCountDown;
- (void)onCountDownFinish;
- (void)refreshTipLabel;
- (void)refreshUI;
- (void)prepareToStartSing;
- (void)startCgiToPlay:(id)a0;
- (void)startToPrepareSingSession:(id)a0;
- (void)startToPrepareSongResource:(id)a0;
- (void)onSingPrepareResponse;
- (void).cxx_destruct;

@end
