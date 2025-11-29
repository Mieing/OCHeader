@class NSString, NSMutableArray, BaseResponse;

@interface BizMsgReSortResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long nextReqTime;
@property (nonatomic) unsigned int threshold;
@property (nonatomic) unsigned int unreadThreshold;
@property (nonatomic) unsigned long long limitTime;
@property (nonatomic) unsigned int maxMsgCount;
@property (retain, nonatomic) NSMutableArray *updateMsg;
@property (retain, nonatomic) NSString *rankSessionid;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSMutableArray *recommendArticleInfo;
@property (retain, nonatomic) NSString *buffer;
@property (nonatomic) unsigned int subscribeMsgLimit;
@property (nonatomic) unsigned int contextMsgLimit;
@property (nonatomic) unsigned int extraRecMsgCount;
@property (retain, nonatomic) NSString *recBuffer;

+ (void)initialize;

@end
