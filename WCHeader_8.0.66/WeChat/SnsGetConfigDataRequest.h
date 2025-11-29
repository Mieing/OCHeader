@class BaseRequest;

@interface SnsGetConfigDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int aiImageType;

+ (void)initialize;

@end
