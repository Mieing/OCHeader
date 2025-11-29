@class NSString, BaseResponse;

@interface ExtRegResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int uin;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int serverTime;
@property (retain, nonatomic) NSString *openId;

+ (void)initialize;

@end
