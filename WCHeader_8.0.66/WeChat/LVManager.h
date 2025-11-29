@class LVMinimize, LVCacheManager, NSMutableDictionary, NSString;

@interface LVManager : MMUserService <MegaVideoReddotListener, MMServiceProtocol>

@property (class, readonly, nonatomic) LVManager *shared;

@property (retain, nonatomic) LVMinimize *minimize;
@property (retain, nonatomic) LVCacheManager *pageCache;
@property (retain, nonatomic) NSMutableDictionary *cachedExpt;
@property (nonatomic) BOOL redDotOberver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exptStringValueForKey:(id)a0 ignoreCache:(BOOL)a1;
- (int)exptIntValueForKey:(id)a0 defaultValue:(int)a1 ignoreCache:(BOOL)a2;
- (BOOL)exptBoolValueForKey:(id)a0 defaultValue:(BOOL)a1 ignoreCache:(BOOL)a2;
- (BOOL)enableBrowseChannel;
- (long long)playerDetailEnterType;
- (BOOL)isPlayerDetailFlutterFromOthers;
- (int)mainFeedType;
- (BOOL)isMainFeedFlutter;
- (BOOL)isMainFeedFlutterChannel;
- (int)channelUIStyle;
- (BOOL)shouldAutoMinimize;
- (BOOL)shouldAutoPip;
- (int)cellExposePercentage;
- (BOOL)mainFeedAutoPlay;
- (BOOL)mainFeedSilencePlay;
- (BOOL)mainFeedCardShowDuration;
- (BOOL)playerDetailPrefetchContinuePlayFeed;
- (int)playerDetailPrefetchRemainingTime;
- (BOOL)openMainFeedCache;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)setupSubmanagers;
- (void)startReddotObserver;
- (void)stopReddotObserver;
- (void)onFindFriendRedDotEvent:(id)a0;
- (void)onReddotChanged:(id)a0 newReddotInfo:(id)a1;
- (void).cxx_destruct;

@end
