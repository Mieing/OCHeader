@class BaseRequest, NSString;

@interface SearchGameListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offSet;
@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) NSString *country;

+ (void)initialize;

@end
