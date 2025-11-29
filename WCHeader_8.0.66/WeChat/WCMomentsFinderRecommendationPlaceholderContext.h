@class WCDataItem;

@interface WCMomentsFinderRecommendationPlaceholderContext : NSObject

@property (retain, nonatomic) WCDataItem *previousDataItem;
@property (nonatomic) unsigned long long previousItemIndex;
@property (retain, nonatomic) WCDataItem *badgeDataItem;

- (void).cxx_destruct;

@end
