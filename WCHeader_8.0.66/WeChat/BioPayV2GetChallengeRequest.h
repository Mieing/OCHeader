@class BaseRequest, NSString;

@interface BioPayV2GetChallengeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *cpuId;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) int biometryType;
@property (nonatomic) int openType;

+ (void)initialize;

@end
