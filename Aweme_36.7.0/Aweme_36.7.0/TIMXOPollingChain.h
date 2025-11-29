@class TIMXPerUserPuller, NSString, TIMXSDKInstance;

@interface TIMXOPollingChain : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXPerUserPuller *puller;
@property (nonatomic) int inbox;
@property (nonatomic) BOOL isManual;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preStartPolling:(id)a0;
- (void)startPassivePolling:(int)a0;
- (void)stopPassivePolling;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
