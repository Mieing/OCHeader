@class BaseRequest, NSString;

@interface OpTvHistRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *brandUserName;

+ (void)initialize;

@end
