@class NSString, BaseResponse;

@interface BioPayV2UpdateAuthKeyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;

+ (void)initialize;

@end
