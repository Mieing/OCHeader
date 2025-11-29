@class BaseRequest, NSString, NSData;

@interface GetRemindUserListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSData *context;
@property (nonatomic) unsigned int limit;

+ (void)initialize;

@end
