@class BaseRequest;

@interface FinderLiveGetFriendChatInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;

+ (void)initialize;

@end
