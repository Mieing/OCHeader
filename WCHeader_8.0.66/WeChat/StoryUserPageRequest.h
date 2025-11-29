@class BaseRequest, NSString;

@interface StoryUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long maxId;
@property (nonatomic) unsigned long long minFilterId;
@property (nonatomic) unsigned int lastRequestTime;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *chatRoomName;

+ (void)initialize;

@end
