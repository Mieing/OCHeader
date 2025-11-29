@class NSString, NoticeItem, BaseResponse;

@interface AAOperationRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int maxPayerNum;
@property (nonatomic) unsigned int maxReceiverNum;
@property (nonatomic) unsigned int maxTotalNum;
@property (nonatomic) unsigned long long maxTotalAmount;
@property (nonatomic) unsigned long long maxPerAmount;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *noticeUrl;
@property (nonatomic) unsigned int defaultMod;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (nonatomic) BOOL showSolitaireEntrance;

+ (void)initialize;

@end
