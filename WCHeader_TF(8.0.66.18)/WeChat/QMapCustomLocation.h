@class NSThread, QMapRepeatTimer, NSMutableArray;
@protocol QMapCustomLocationDelegate;

@interface QMapCustomLocation : NSObject

@property (retain, nonatomic) NSThread *locationCheckThread;
@property (retain, nonatomic) QMapRepeatTimer *timer;
@property (nonatomic) BOOL isThreadExit;
@property (nonatomic) int loopCount;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (retain, nonatomic) NSMutableArray *interlandDataSafetyManangerArray;
@property (weak, nonatomic) id<QMapCustomLocationDelegate> delegate;

+ (id)shareInstance;

- (id)init;
- (void)callParseCustomLocationDelegate;
- (void)checkLocationIsInland:(id)a0;
- (void)startCustomLocationCheckingLoop:(double)a0;
- (void)callObtainLocationSourceFromDifferentTarget;
- (void)triggerParseQMapCustomLocationSourceDelegate;
- (void)createLocationParsingThread;
- (void)threadStart:(id)a0;
- (void)increaseLoopCount;
- (void)decreaseLoopCount;
- (void)dealloc;
- (void)registerDataSafetyMananger:(id)a0;
- (void)unregisterDataSafetyMananger:(id)a0;
- (void)triggerInternalLocationCheck;
- (void)obtainUselocationFromDataSafetyInternalManager;
- (void)checkLocationIsInlandByInternalLocations:(id)a0;
- (void).cxx_destruct;

@end
