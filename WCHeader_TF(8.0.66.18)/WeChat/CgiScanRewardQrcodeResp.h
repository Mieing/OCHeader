@class NSString, NoticeItem, NSMutableArray, BaseResponse;

@interface CgiScanRewardQrcodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *receiverName;
@property (retain, nonatomic) NSMutableArray *amtList;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *upperRightStr;
@property (retain, nonatomic) NSString *receiverTrueName;
@property (retain, nonatomic) NSString *scanId;
@property (retain, nonatomic) NSString *extendStr1;
@property (retain, nonatomic) NSString *extendStr2;
@property (nonatomic) unsigned int maxAmt;
@property (retain, nonatomic) NSString *receiverOpenId;
@property (retain, nonatomic) NSString *receiverNickname;
@property (retain, nonatomic) NSString *phoneUrl;
@property (retain, nonatomic) NoticeItem *noticeItem;

+ (void)initialize;

@end
