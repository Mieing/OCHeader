@class NSString, MMTimer, WAAppTaskHandlerWrapper, MMListenMembershipJoinInfo_AdSchemeInfo, MMUIViewController;

@interface TingPlayerAdvertisement : NSObject

@property (retain, nonatomic) WAAppTaskHandlerWrapper *handlerWrapper;
@property (retain, nonatomic) MMListenMembershipJoinInfo_AdSchemeInfo *adInfo;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) BOOL preloadDone;
@property (copy, nonatomic) id /* block */ completeHandler;
@property (copy, nonatomic) id /* block */ preloadFinishHandler;
@property (nonatomic) int uiScene;
@property (weak, nonatomic) MMUIViewController *displayViewController;

- (id)initWithADInfo:(id)a0;
- (id)appid;
- (void)startSession;
- (void)closeSession;
- (void)startTimer;
- (void)stopTimer;
- (void)onTimerCheck:(id)a0;
- (BOOL)isAdActive;
- (id)openInfo;
- (void)preload;
- (void)commReport:(unsigned int)a0;
- (void)commReport:(unsigned int)a0 extraData:(id)a1;
- (void)show;
- (void)show:(id /* block */)a0;
- (void)handleAdvertisementClosed:(id)a0;
- (void)handleBizDataPipeHandler:(id)a0;
- (void)handlePreloadAdLoadDone:(unsigned long long)a0 preloadSuccess:(BOOL)a1;
- (void).cxx_destruct;

@end
