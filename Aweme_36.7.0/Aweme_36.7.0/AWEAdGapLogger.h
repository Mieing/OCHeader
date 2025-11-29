@class NSString, NSMutableDictionary, AWEAdGapTrackModel;

@interface AWEAdGapLogger : HTSService <AWEAdGapLogger>

@property (nonatomic) BOOL enableAdGapLogger;
@property (nonatomic) BOOL isFirstVideoShow;
@property (nonatomic) BOOL isPlayingAd;
@property (nonatomic) double prevAdFinishTime;
@property (nonatomic) double curAdStartTime;
@property (retain, nonatomic) NSMutableDictionary *trackCount;
@property (retain, nonatomic) AWEAdGapTrackModel *adGapTrackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)logInteractiveEvent:(unsigned long long)a0 from:(id)a1;
- (void)logInteractiveEvent:(unsigned long long)a0 with:(id)a1 from:(id)a2;
- (BOOL)shouldSendToSati;
- (void)handleAppHotStart:(id)a0;
- (void)handleSplashFinish:(id)a0;
- (void)handleFeedVideoWillDisplay:(id)a0;
- (void)handleFeedVideoDidEndDisplay:(id)a0;
- (void)trackIfAdGapInteractive;
- (void).cxx_destruct;
- (void)dealloc;

@end
