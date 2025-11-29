@class BaseRequest, NSString;

@interface GetTwistAdCardIdReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *snsId;
@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *pageId;

+ (void)initialize;

@end
