@class BaseRequest, NSString;

@interface GetAuthAppListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *lang;

+ (void)initialize;

@end
