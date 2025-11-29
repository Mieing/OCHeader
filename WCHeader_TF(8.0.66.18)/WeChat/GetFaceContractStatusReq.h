@class BaseRequest, NSString;

@interface GetFaceContractStatusReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *packageSign;
@property (retain, nonatomic) NSString *osKernelVersion;

+ (void)initialize;

@end
