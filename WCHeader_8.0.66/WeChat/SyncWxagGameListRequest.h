@class BaseRequest, NSString;

@interface SyncWxagGameListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offSet;
@property (retain, nonatomic) NSString *country;

+ (void)initialize;

@end
