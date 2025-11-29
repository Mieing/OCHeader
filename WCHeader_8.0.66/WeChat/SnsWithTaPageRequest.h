@class BaseRequest, NSString;

@interface SnsWithTaPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned int limit;
@property (nonatomic) unsigned int nextPageType;

+ (void)initialize;

@end
