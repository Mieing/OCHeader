@class NSString, RemindWin, RealNameInfo, BaseResponse;

@interface TransferPhoneChangeSwitchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) RealNameInfo *realNameInfo;
@property (retain, nonatomic) RemindWin *jumpWin;
@property (nonatomic) unsigned int grantFlag;
@property (retain, nonatomic) NSString *wording;

+ (void)initialize;

@end
