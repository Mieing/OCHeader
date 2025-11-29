@class SessionIdList, NSString, AAOperationInfo, NoticeItem, NSMutableArray, BaseResponse;

@interface QueryPfInfoRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *receiverUsername;
@property (retain, nonatomic) NSMutableArray *payerList;
@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *remark;
@property (retain, nonatomic) SessionIdList *sessionidList;
@property (retain, nonatomic) NSString *picSign;
@property (retain, nonatomic) AAOperationInfo *operationInfo;
@property (retain, nonatomic) NoticeItem *noticeItem;

+ (void)initialize;

@end
