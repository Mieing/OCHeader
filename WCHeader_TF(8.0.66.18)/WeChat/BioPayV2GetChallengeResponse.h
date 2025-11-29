@class NSString, BaseResponse;

@interface BioPayV2GetChallengeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *challenge;
@property (nonatomic) int needChangeAuthKey;

+ (void)initialize;

@end
