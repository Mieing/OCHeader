@class AWEFollowListCategoryStatisticsModel, AWEFollowListPageContext, AWEFollowListClassificationEntrance, NSNumber;

@interface AWEFollowListClassificationEntranceCell : UICollectionViewCell

@property (retain, nonatomic) AWEFollowListClassificationEntrance *entrance;
@property (retain, nonatomic) AWEFollowListCategoryStatisticsModel *categoryResponse;
@property (retain, nonatomic) NSNumber *categoryFollowingGroupCount;
@property (retain, nonatomic) NSNumber *cachedGroupCount;
@property (nonatomic) BOOL unreadNeedTotal;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
