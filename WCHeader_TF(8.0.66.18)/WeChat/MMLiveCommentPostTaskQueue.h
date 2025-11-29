@class NSMutableDictionary, MMLiveTaskId, NSMutableArray;

@interface MMLiveCommentPostTaskQueue : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) unsigned int boxType;
@property (retain, nonatomic) NSMutableArray *pendingQueue;
@property (retain, nonatomic) NSMutableDictionary *postingDict;
@property (nonatomic) unsigned long long currMaxPostTaskID;

- (id)initWithTaskId:(id)a0 boxType:(unsigned int)a1;
- (int)maxPostingCntOnce;
- (BOOL)isCurrPostingTaskOverLimit;
- (unsigned long long)generatePostTaskID;
- (void)autoIncreasePostTaskID;
- (void)onPostTaskPostBegin:(id)a0;
- (void)onPostTaskPostEnd:(unsigned long long)a0;
- (void).cxx_destruct;

@end
