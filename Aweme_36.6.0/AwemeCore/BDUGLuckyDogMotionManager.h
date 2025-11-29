@class BDUGLuckyIosShakeConfig, NSArray, NSTimer, CMMotionManager, NSOperationQueue, NSMutableDictionary, NSString;

@interface BDUGLuckyDogMotionManager : NSObject <BDUGLuckyDogMotionProtocol>

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) CMMotionManager *manager;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) BDUGLuckyIosShakeConfig *defaultConfig;
@property (copy, nonatomic) NSArray *modeConfigs;
@property (retain, nonatomic) NSMutableDictionary *currentDetectorMotionInfo;
@property (nonatomic) double lastRequestPushTimeStamp;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) long long globleShakeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeMotionManager;
+ (void)triggerMotion;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)canShake;
- (void)vibrateWithStyle:(long long)a0;
- (void)registerShakeType:(long long)a0 bussinessId:(id)a1 successBlock:(id /* block */)a2;
- (void)unRegisterWithBussinessId:(id)a0;
- (long long)currentGlobleShakCount;
- (void)triggleMotion;
- (void)resetWithBussinessId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObservers;
- (void)startMotion;
- (void)stopMotion;

@end
