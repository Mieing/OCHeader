@class NSMutableDictionary, NSTimer, CMMotionManager, NSOperationQueue;

@interface AWEMotionManager : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) CMMotionManager *manager;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) long long count;
@property (nonatomic) long long lastDirection;
@property (nonatomic) long long remainSamples;
@property (retain, nonatomic) NSMutableDictionary *motionConfigDictionary;
@property (nonatomic) double defaultShakeTimeInterval;

+ (void)aweprivacy_preload;
+ (void)aweprivacy_pipeline_preload;
+ (id)sharedInstance;

- (void)unRegisterWithIdentifier:(id)a0;
- (void)registerMotionItemConfig:(id)a0 identifier:(id)a1;
- (void)startDetectMotionBeginFrom:(id)a0;
- (BOOL)motionOptimize;
- (id)blacklistMotionItems;
- (id)findFirstResponderMotionItem;
- (void)startMotion:(id)a0 from:(id)a1;
- (id)findLevelResponderMotionItem:(long long)a0;
- (void)aweprivacy_pipeline_startDetectMotionBeginFrom:(id)a0;
- (void)aweprivacy_startDetectMotionBeginFrom:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)stopMotion;

@end
