@class AWEAdTaskContext, AWEAdAsyncTaskCoordinator, NSString;

@interface AWEAdBasicTask : NSObject <AWEAdBasicTaskProtocol>

@property (readonly, nonatomic) AWEAdTaskContext *context;
@property (copy, nonatomic) id /* block */ shouldBeExcutedBlock;
@property (copy, nonatomic) id /* block */ taskWillExcuteBlock;
@property (copy, nonatomic) id /* block */ excuteBlock;
@property (copy, nonatomic) id /* block */ taskDidExcutedBlock;
@property (readonly, nonatomic) BOOL taskResult;
@property (copy, nonatomic) id /* block */ asyncExcuteBlock;
@property (retain, nonatomic) AWEAdAsyncTaskCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:(BOOL)a0;
- (void)taskFailed;
- (void)asyncTaskExcute;
- (void)taskSucceed;
- (id)initWithContextBuilder:(id /* block */)a0;
- (BOOL)isAsyncTask;
- (void)asyncRun;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)run;

@end
