@class NSArray, NSDictionary;

@interface AWEFeedDCMidSearchVisibilityInfo : NSObject

@property (nonatomic) double currentTime;
@property (copy, nonatomic) NSArray *visibleSectionControllers;
@property (copy, nonatomic) NSDictionary *sectionToVisiblePercentMap;
@property (copy, nonatomic) NSArray *sectionsBecameInvisible;

- (void).cxx_destruct;

@end
