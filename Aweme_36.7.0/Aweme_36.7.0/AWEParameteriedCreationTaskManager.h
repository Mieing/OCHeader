@class NSOperationQueue, NSMutableArray;

@interface AWEParameteriedCreationTaskManager : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) long long totalOpCount;
@property long long needCancelOpCount;
@property (retain, nonatomic) NSMutableArray *readyOps;
@property (copy, nonatomic) id /* block */ theCompletion;
@property (copy, nonatomic) id /* block */ theCancelCallback;
@property (nonatomic) BOOL cancelSuccessFlag;
@property (retain, nonatomic) NSMutableArray *errors;
@property BOOL willCancel;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ finishedCallback;
@property (copy, nonatomic) id /* block */ failedCallback;
@property (copy, nonatomic) id /* block */ canceledCallback;

+ (id)createManagerAndHold;

- (void)startExcuteWithCompletion:(id /* block */)a0 didCancel:(id /* block */)a1;
- (void)cancelExcute;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
