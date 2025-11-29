@class NSTimer, NSString;

@interface AWEGrouponPinTopManager : NSObject <AWEGrouponPinTopTaskEventMessage>

@property (retain, nonatomic) NSTimer *runTaskTimer;
@property (retain, nonatomic) NSTimer *checkTaskTimer;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkCanPinTopWithCompletion:(id /* block */)a0;

- (void)applicationEnterBackground;
- (void)applicationBecomeActive;
- (void)handlePitayaMessage:(id)a0;
- (void)registerAllRequireMessage;
- (void)finishPinTopPitayaTaskWithParams:(id)a0;
- (void)teardownTimers;
- (void)triggerAlgorithmPackage;
- (void)teardownRunTaskTimer;
- (void)teardownCheckTaskTimer;
- (void)addPinTopRequestTask:(id)a0;
- (void)resetPinTopTimer;
- (void).cxx_destruct;
- (id)initWithContext:(long long)a0;
- (void)dealloc;
- (void)setupTimer;

@end
