@class AWEFollowListTarBarModel, NSDate;

@interface AWERelationContainerTracker : NSObject

@property (retain, nonatomic) AWEFollowListTarBarModel *firstTabBarModel;
@property (retain, nonatomic) NSDate *enterRelationContainerTime;

- (void)trackRelationListConsumeInfoWithFollowListViewModel:(id)a0;
- (void)trackRelationListConsumeInfoWithFansListViewModel:(id)a0;
- (void).cxx_destruct;

@end
