@class NSMutableArray;

@interface FeedCardEventPushConfig : GPBMessage

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasEnable;
@property (retain, nonatomic) NSMutableArray *subscriptionIdsArray;
@property (readonly, nonatomic) unsigned long long subscriptionIdsArray_Count;

+ (id)descriptor;

@end
