@class NSString, BaseResponse;

@interface GetCloudIMSessionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *sessionKey;
@property (retain, nonatomic) NSString *openid;
@property (nonatomic) unsigned int lifespan;

+ (void)initialize;

@end
