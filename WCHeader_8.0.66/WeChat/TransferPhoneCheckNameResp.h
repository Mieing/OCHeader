@class NSString, RemindWin, BaseResponse;

@interface TransferPhoneCheckNameResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) RemindWin *jumpWin;
@property (retain, nonatomic) NSString *realNameToken;
@property (retain, nonatomic) NSString *newRealName;

+ (void)initialize;

@end
