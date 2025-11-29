@class BaseRequest, NSData;

@interface GetRemindRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int getType;
@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) NSData *kvPageContext;

+ (void)initialize;

@end
