@class NSString, NotifyMsgInfo, CgiUnionTransferNoticeItem, NSMutableArray, BaseResponse;

@interface CgiUnionTransferQueryStatusResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int transStatus;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *statusDesc;
@property (retain, nonatomic) NSString *statusSupplementary;
@property (retain, nonatomic) CgiUnionTransferNoticeItem *notice;
@property (retain, nonatomic) NotifyMsgInfo *notifyInfo;
@property (retain, nonatomic) NSMutableArray *descItemList;
@property (retain, nonatomic) NSMutableArray *uprightCornerList;
@property (retain, nonatomic) NSString *bottomWording;
@property (retain, nonatomic) NSString *payerUsername;
@property (retain, nonatomic) NSString *receiverUsername;

+ (void)initialize;

@end
