@class NSMutableArray, NSString, AddMsg, BusinessInfo, BaseResponse;

@interface GetFuncMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int opCode;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) AddMsg *addMsg;
@property (retain, nonatomic) NSString *customBuff;
@property (nonatomic) unsigned int actionTime;
@property (retain, nonatomic) BusinessInfo *businessInfo;
@property (retain, nonatomic) NSMutableArray *addMsgs;

+ (void)initialize;

@end
