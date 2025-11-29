@class BaseRequest, NSString;

@interface StoryDateDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) int timeZone;
@property (retain, nonatomic) NSString *date;
@property (nonatomic) unsigned long long maxId;

+ (void)initialize;

@end
