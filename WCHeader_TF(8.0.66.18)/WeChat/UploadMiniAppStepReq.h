@class BaseRequest, NSString;

@interface UploadMiniAppStepReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int step;
@property (nonatomic) BOOL isAdd;
@property (nonatomic) unsigned int timeStamp;

+ (void)initialize;

@end
