@class BaseRequest, NSString;

@interface AdAntiAbuseReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSString *adExtInfo;
@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (nonatomic) unsigned long long localCacheTime;

+ (void)initialize;

@end
