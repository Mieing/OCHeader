@interface GCReportBaseVc : GameCenterNativeVc

@property (nonatomic) double durationInterval;
@property (nonatomic) double lastVisibleTime;
@property (nonatomic) BOOL gcReportIsVisible;
@property (nonatomic) BOOL gcReportIsViewDidAppear;
@property (nonatomic) unsigned long long sceneId;
@property (nonatomic) unsigned long long uiareaIdForStayDuration;

- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)reportApplicationWillEnterForeground;
- (void)reportApplicationDidEnterBackground;
- (void)markVisibleBegin;
- (void)markVisibleEnd;
- (void)reportOnVisibleChange:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)commonConfigData:(id)a0 uiArea:(unsigned long long)a1 positionId:(unsigned long long)a2 op:(unsigned long long)a3;
- (void)reportStayDuration;
- (void)reportWithUiArea:(unsigned long long)a0 positionId:(unsigned long long)a1 op:(unsigned long long)a2;
- (void)dealloc;

@end
