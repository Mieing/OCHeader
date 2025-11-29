@class NSTimer, NSString, NSHashTable;

@interface AWEHPLottieRetryManager : NSObject <AWEHPLottieRetryManagerProtocol>

@property (retain, nonatomic) NSHashTable *lottieTaskTable;
@property (nonatomic) BOOL isPizzaReady;
@property (nonatomic) BOOL isCombineReady;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addNotification;
- (void)removeNotification;
- (void)hideBottomLottieIfNeed;
- (void)addLottieTask:(id)a0;
- (void)offlineLottieIfNeed;
- (void)hideTopLottieIfNeed;
- (long long)retryDelayTime;
- (BOOL)isLottieActivateWithComponentID:(id)a0;
- (void)retryAllLottieTasks;
- (void)hambInitComplete:(id)a0;
- (void)pizzaInitComplete:(id)a0;
- (void)hideLottieIfNeedWithTask:(id)a0;
- (void)removeLottieTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
