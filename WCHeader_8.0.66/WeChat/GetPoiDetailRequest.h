@class BaseRequest, NSString;

@interface GetPoiDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
