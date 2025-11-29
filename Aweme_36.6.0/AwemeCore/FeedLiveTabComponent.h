@class FeedLiveTabComponentData;

@interface FeedLiveTabComponent : IESLivePBBaseMessage

@property (nonatomic) int componentType;
@property (retain, nonatomic) FeedLiveTabComponentData *componentData;
@property (nonatomic) BOOL hasComponentData;

+ (id)descriptor;

@end
