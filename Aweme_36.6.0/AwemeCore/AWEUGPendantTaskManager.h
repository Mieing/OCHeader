@class NSMutableArray;
@protocol AWEUGPendantTaskProtocol;

@interface AWEUGPendantTaskManager : NSObject

@property (retain, nonatomic) NSMutableArray *tasksArray;
@property (weak, nonatomic) id<AWEUGPendantTaskProtocol> currentTask;
@property (nonatomic) BOOL isPaused;

+ (id)shareInstance;

- (void)startNextTask;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)start;
- (void)resume;

@end
