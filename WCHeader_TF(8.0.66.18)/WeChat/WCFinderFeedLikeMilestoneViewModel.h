@class WCFinderFeedLikeMilestoneInfo;

@interface WCFinderFeedLikeMilestoneViewModel : NSObject

@property (retain) WCFinderFeedLikeMilestoneInfo *inProgressMilestone;

+ (id)shouldShowMilestone:(unsigned long long)a0 forFeed:(id)a1 inProgressMilestone:(id)a2;

- (void)onMilestoneWillShow:(id)a0;
- (void)onMilestoneDidShow:(id)a0;
- (void)resetInProgressMilestone;
- (void).cxx_destruct;

@end
