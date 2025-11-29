@class MMListenDiscoverItem;

@interface MMListenSlideOver : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MMListenDiscoverItem *discoverItem;
@property (nonatomic) int descType;
@property (nonatomic) BOOL isPersonalizedRecommend;

+ (void)initialize;

@end
