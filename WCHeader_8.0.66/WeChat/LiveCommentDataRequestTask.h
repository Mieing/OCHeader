@class MMLiveTaskId;

@interface LiveCommentDataRequestTask : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) BOOL isStartGetLiveComment;
@property (nonatomic) BOOL isLongPulling;

- (void).cxx_destruct;

@end
