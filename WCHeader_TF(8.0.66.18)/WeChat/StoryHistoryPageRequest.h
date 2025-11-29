@class BaseRequest, NSString;

@interface StoryHistoryPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) int timeZone;
@property (nonatomic) unsigned long long maxId;
@property (nonatomic) unsigned long long minFilterId;
@property (nonatomic) unsigned int lastRequestTime;

+ (void)initialize;

@end
