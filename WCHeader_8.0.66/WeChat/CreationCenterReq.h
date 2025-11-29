@class BaseRequest, NSString;

@interface CreationCenterReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *data;

+ (void)initialize;

@end
