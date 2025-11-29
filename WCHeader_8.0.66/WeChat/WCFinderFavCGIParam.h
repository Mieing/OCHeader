@class NSString, NSMutableDictionary, FinderInteractionMileStoneInfo, WCFinderFeedLikeMilestoneInfo, FinderFavNewLifeReportInfo;

@interface WCFinderFavCGIParam : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) BOOL isFav;
@property (nonatomic) int scene;
@property (nonatomic) int sourceType;
@property (copy, nonatomic) NSMutableDictionary *clientUdfKv;
@property (retain, nonatomic) FinderFavNewLifeReportInfo *newlifeReportInfo;
@property (retain, nonatomic) FinderInteractionMileStoneInfo *showMilestoneInfo;
@property (retain, nonatomic) WCFinderFeedLikeMilestoneInfo *inProgressMilestone;

- (void).cxx_destruct;

@end
