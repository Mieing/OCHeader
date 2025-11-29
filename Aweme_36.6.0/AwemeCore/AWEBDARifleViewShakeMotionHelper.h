@class NSString, NSHashTable;

@interface AWEBDARifleViewShakeMotionHelper : NSObject <AWEMotionItemConfigProtocol>

@property (retain, nonatomic) NSHashTable *subscribers;
@property (nonatomic) BOOL backgrounding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleBecomeActive;
- (void)handleResignActive;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:(id)a0 error:(id)a1 from:(id)a2;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)subscribeShakeMotion:(id)a0;
- (void)unsubscribeShakeMotion:(id)a0;
- (void).cxx_destruct;

@end
