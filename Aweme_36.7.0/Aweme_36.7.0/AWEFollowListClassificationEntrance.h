@class AWEFollowListPageContext, NSString, NSArray, AWEFollowListClassificationEntranceIndicator, AWEFollowListCategoryStatisticsModel, AWEFollowListClassificationEntranceTopAndBottomView, NSNumber, UIScrollView;

@interface AWEFollowListClassificationEntrance : UIView <UIScrollViewDelegate, AWERelationFollowCategoryEntranceProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSArray *entranceArray;
@property (retain, nonatomic) NSArray *viewArray;
@property (retain, nonatomic) AWEFollowListClassificationEntranceTopAndBottomView *recentUpdateView;
@property (retain, nonatomic) AWEFollowListClassificationEntranceIndicator *indicator;
@property (nonatomic) BOOL isAppear;
@property (retain, nonatomic) AWEFollowListCategoryStatisticsModel *model;
@property (retain, nonatomic) NSNumber *categoryFollowingGroupCount;
@property (nonatomic) BOOL unreadNeedTotal;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEConcernModuleServiceDOUYINDSAdapterClass;

- (void)buildViewArray;
- (void)buildIndicatorIfNeed;
- (void)layoutViewArray;
- (id)__defaultText:(long long)a0;
- (id)__titleAttributedString:(long long)a0 text:(id)a1;
- (long long)__getUnreadWithType:(long long)a0 model:(id)a1;
- (id)getStoreModelWith:(id)a0;
- (id)aAWEConcernModuleServiceDOUYINDSAdapter;
- (void)exopose;
- (void)updateGroupCountWhenUsingCache:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (double)suggestedHeight;

@end
