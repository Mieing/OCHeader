@class NSOperationQueue, CMMotionManager;

@interface MSSenManager : NSObject

@property (nonatomic) BOOL isMotionAvailable;
@property (retain, nonatomic) CMMotionManager *singArray;
@property (retain, nonatomic) NSOperationQueue *libString;
@property BOOL needToNotify;
@property (nonatomic) void *funDelegate;
@property (nonatomic) void *dclickKVO;
@property (nonatomic) void *workDic;
@property (nonatomic) int sleepMis;
@property BOOL figCount;

+ (BOOL)getApplicationActive;
+ (BOOL)getSyncApplicationActive;
+ (id)shareInstance;

- (BOOL)ms_start;
- (BOOL)ms_startMotionDeviceUpdates;
- (void)ms_stopDeviceMotionUpdates;
- (BOOL)start:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
