@class NSString, MMUILabel, WCFinderHeadImageView;

@interface MMFinderLiveKTVEndContentView : MMFinderLiveKTVBaseView <MMFinderLiveKTVUIExt>

@property (retain, nonatomic) WCFinderHeadImageView *singerHeadImageView;
@property (retain, nonatomic) MMUILabel *endTipLabel;
@property (retain, nonatomic) MMUILabel *scoreCntLabel;
@property (retain, nonatomic) MMUILabel *levelCntLabel;
@property (retain, nonatomic) WCFinderHeadImageView *nextSingerHeadImageView;
@property (retain, nonatomic) MMUILabel *nextSongTipLabel;
@property (retain, nonatomic) MMUILabel *nextSongLabel;
@property (retain, nonatomic) NSString *currUniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutEndTipWidgets;
- (void)createSingerHeadImageView;
- (void)createNextSingerHeadImageView;
- (void)createTipLabel;
- (void)updateEndTipWidgetsOrigin;
- (void)layoutScoreAndLevelWidgets;
- (void)createScoreCntLabel;
- (void)createLevelCntLabel;
- (void)updateScoreAndLevelWidgetsOrigin;
- (void)layoutNextSongTipLabel;
- (void)updateNextSongTipLabelOrigin;
- (void)refresh;
- (void)onCurrSongNameUpdated;
- (void)onNextSongUpdated;
- (void)clearStates;
- (BOOL)updateCurrUniqueId;
- (void)updateDatas;
- (void)updateSingerHeaderImage;
- (void)updateNextSingerHeadImage;
- (void)updateEndTip;
- (void)updateScoreCnt;
- (void)updateLevelCnt;
- (void)updateNextSong;
- (id)gradientColorImageForTheme:(id)a0;
- (id)liveTask;
- (void)onLiveKTVMainWidgetColorUpdate:(id)a0 taskId:(id)a1;
- (void).cxx_destruct;

@end
