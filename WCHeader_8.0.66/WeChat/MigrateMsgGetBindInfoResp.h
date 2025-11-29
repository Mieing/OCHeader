@class NSString, BaseResponse;

@interface MigrateMsgGetBindInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *sha256Username;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
