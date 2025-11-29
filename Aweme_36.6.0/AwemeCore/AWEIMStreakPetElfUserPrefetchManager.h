@class NSString, RxPromise;

@interface AWEIMStreakPetElfUserPrefetchManager : NSObject <IESIMCoreBusinessCommandMessageObserver> {
    long long p_observeOnceToken;
}

@property (nonatomic) int currentLevelStore;
@property (readonly, nonatomic) RxPromise *valueReadJob;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)startObserve;
- (void)p_handleBumpVersionMessage:(id)a0;
- (void)p_bumpCurrentUserElfLocalVersion;
- (void)iesim_didReceiveBusinessCommandMessageOfType:(unsigned long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (int)currentLevel;

@end
