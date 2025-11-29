@class NSTimer, NSHashTable;
@protocol BDFileUploadiOSTimerEvent;

@interface _BDFileUploadiOSCommonTimer : NSObject

@property (retain, nonatomic) NSHashTable<BDFileUploadiOSTimerEvent> *events;
@property (retain, nonatomic) NSTimer *scheTimer;
@property (nonatomic, getter=isRunning) BOOL running;

+ (id)shareInstance;

- (void)_innerTimerEvent;
- (void)addTimerEvent:(id)a0;
- (void)removeTimerEvent:(id)a0;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground;
- (void)_stopTimer;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)_applicationDidEnterBackground;
- (void)_resetTimer;

@end
