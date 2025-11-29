@class NSString, BaseResponse;

@interface SetWalletEntranceBalanceSwitchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int switchState;

+ (void)initialize;

@end
