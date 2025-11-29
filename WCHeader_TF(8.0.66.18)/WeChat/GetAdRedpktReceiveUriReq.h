@class BaseRequest, NSString;

@interface GetAdRedpktReceiveUriReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *combineReceiveUri;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned long long pageId;
@property (nonatomic) unsigned long long canvasId;
@property (nonatomic) unsigned long long twistId;
@property (retain, nonatomic) NSString *extInfo;

+ (void)initialize;

@end
