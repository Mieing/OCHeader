@class NSMutableArray;

@interface BDPOfflinePackageGroup : NSObject

@property (retain, nonatomic) NSMutableArray *tasksArray;
@property (retain, nonatomic) NSMutableArray *successedTasksArray;
@property (retain, nonatomic) NSMutableArray *failedTasksArray;
@property (copy, nonatomic) id /* block */ taskCompletion;
@property (copy, nonatomic) id /* block */ groupCompletion;

- (void)excuteTaskCompletionWithTask:(id)a0 success:(BOOL)a1 errorDomain:(id)a2 taskStatus:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
