@class NSString, NSMutableDictionary, MMLiveTaskId;

@interface MMLiveCommentPostTask : NSObject

@property (retain, nonatomic) NSMutableDictionary *externInfo;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) double localSeq;
@property (copy, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int msgType;
@property (copy, nonatomic) NSString *nickName;
@property (readonly, nonatomic) unsigned long long postTaskID;

- (void)addExternInfo:(id)a0;
- (void)configPostTaskID:(unsigned long long)a0;
- (void).cxx_destruct;

@end
