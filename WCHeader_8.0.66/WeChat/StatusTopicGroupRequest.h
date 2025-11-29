@class NSString;

@interface StatusTopicGroupRequest : WXPBGeneratedMessage

@property (nonatomic) int sortType;
@property (retain, nonatomic) NSString *clusterPresentConfigType;
@property (nonatomic) BOOL onlyKeepMyTopic;

+ (void)initialize;

@end
