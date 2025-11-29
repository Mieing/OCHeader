@class BaseRequest, NSString;

@interface GetFaceCheckLiveTypeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *packageSign;
@property (retain, nonatomic) NSString *verifyTitle;
@property (retain, nonatomic) NSString *osKernelVersion;

+ (void)initialize;

@end
