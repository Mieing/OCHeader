@class NSString, NoticeItem, BaseResponse;

@interface CheckHoneyUserResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned long long minCreditLine;
@property (nonatomic) unsigned long long maxCreditLine;
@property (retain, nonatomic) NSString *truenameMask;
@property (retain, nonatomic) NSString *takeMessage;
@property (retain, nonatomic) NSString *wishing;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (retain, nonatomic) NSString *overMaxLimitWarning;

+ (void)initialize;

@end
