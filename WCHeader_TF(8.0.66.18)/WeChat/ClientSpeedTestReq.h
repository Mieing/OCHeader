@class BaseRequest;

@interface ClientSpeedTestReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int sceneCode;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int uploadSize;
@property (nonatomic) unsigned int downloadSize;
@property (nonatomic) unsigned int concurrentNum;

+ (void)initialize;

@end
