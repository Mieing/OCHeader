@class BaseRequest, NSString, BizMsgReSortContext, NSMutableArray;

@interface BizMsgReSortReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *msg;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int bitFlag;
@property (retain, nonatomic) NSString *buffer;
@property (nonatomic) unsigned int digestBoldCnt;
@property (nonatomic) unsigned int digestExposeCnt;
@property (retain, nonatomic) BizMsgReSortContext *context;
@property (nonatomic) unsigned int lastFailReason;
@property (retain, nonatomic) NSString *recBuffer;
@property (retain, nonatomic) NSString *netType;
@property (nonatomic) BOOL isHeadsetOn;

+ (void)initialize;

@end
