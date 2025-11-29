@class NSString;

@interface TingReportServiceCpp : TingApiReportServiceCpp <TingReportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)createInstance:(int)a0;

- (void)onActionWithContext:(id)a0;
- (id)getReportClientInfo:(int)a0;
- (void)onActionWithActionAndContext:(int)a0 context:(id)a1;
- (void)onActionWithActionAndContextAndTask:(int)a0 context:(id)a1 playTask:(id)a2;
- (void)onActionWithActionAndContextAndTask:(int)a0 context:(id)a1 playTask:(id)a2 eventContext:(id)a3;
- (void)onActionWithActionAndScene:(int)a0 scene:(int)a1 fillBlock:(id /* block */)a2;
- (void)onActionWithActionAndSceneAndContext:(int)a0 scene:(int)a1 context:(id)a2;
- (void)onAction:(int)a0 scene:(int)a1 tingItem:(id)a2 categoryItem:(id)a3 fillBlock:(id /* block */)a4;
- (void)onActionWithItemAndContext:(int)a0 scene:(int)a1 tingItem:(id)a2 categoryItem:(id)a3 context:(id)a4;
- (void)onClickWithItemPlayButton:(id)a0 scene:(int)a1 index:(int)a2 play:(BOOL)a3 fillBlock:(id /* block */)a4;
- (void)onClickWithItemPlayButtonAndContext:(id)a0 scene:(int)a1 index:(int)a2 play:(BOOL)a3 context:(id)a4;
- (void)onClickWithItem:(id)a0 scene:(int)a1 index:(int)a2 fillBlock:(id /* block */)a3;
- (void)onClickWithItemAndContext:(id)a0 scene:(int)a1 index:(int)a2 context:(id)a3;
- (void)onClickWithCategory:(id)a0 scene:(int)a1 index:(int)a2 fillBlock:(id /* block */)a3;
- (void)onClickWithCategoryAndContext:(id)a0 scene:(int)a1 index:(int)a2 context:(id)a3;
- (void)onClickWithLine:(id)a0 discoverItem:(id)a1 scene:(int)a2;
- (void)onPlayerAction:(int)a0 context:(id)a1 playTask:(id)a2 eventContext:(id)a3;
- (void)report;
- (id)getBaseReportContext;
- (void)markMinimizeCloseButtonClicked;
- (void)markPlayCenterClear;
- (void)markAudioModulePausePlay;
- (void)markAudioModuleResume;
- (void)markAudioModuleInterrupted;
- (void)markTingPlayStopAction:(int)a0;
- (void)markTingPlayPauseAction:(int)a0;
- (void)markTingPlayResumeAction:(int)a0;
- (void)markPlayFinishAction:(int)a0;
- (void)onAudioSessionRouteChanged:(int)a0;
- (void)onReachabilityChange:(int)a0;
- (id)getTing28683ParamsStr;
- (id)getCurExploreSessionsContextStr;
- (id)getCurrCategorySession:(id)a0;
- (id)getCurrCategoryInfoContextStr:(id)a0;
- (id)getExploreSessionsContextStr:(id)a0;
- (id)getActiveSessionContextStr:(id)a0;
- (id)getAppSessionContextStr:(id)a0;
- (id)getSquareSessionContextStr:(id)a0;
- (id)getSquareTabSessionContextStr:(id)a0;
- (id)getSquareItemSessionContextStr:(id)a0;
- (int)getVolumePercent;

@end
