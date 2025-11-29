@class BaseRequest, NSString;

@interface GetAdCanvasInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long pageId;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (retain, nonatomic) NSString *supportCapability;
@property (retain, nonatomic) NSString *vangoghLibVersion;

+ (void)initialize;

@end
