@class NSString, BaseResponse;

@interface BindOldWxResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *oldUsername;
@property (retain, nonatomic) NSString *oldAlias;

+ (void)initialize;

@end
