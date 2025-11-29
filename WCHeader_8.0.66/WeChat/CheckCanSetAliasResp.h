@class NSString, NSMutableArray, BaseResponse;

@interface CheckCanSetAliasResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int verifyType;
@property (retain, nonatomic) NSString *verifyUrl;

+ (void)initialize;

@end
