@class NSString, NSDictionary, AWEFollowUserUpdateViewModel, NSNumber, AWERelationCommonSectionViewModel;

@interface AWEFollowUserRecentUpdateViewModel : AWEBaseListViewModel

@property (nonatomic) BOOL showLoading;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSDictionary *trackDict;
@property (retain, nonatomic) AWERelationCommonSectionViewModel *bottomVM;
@property (readonly, copy, nonatomic) NSString *recentUpdateVCTitle;
@property (readonly, nonatomic) NSNumber *totalUnreadItems;
@property (retain, nonatomic) AWEFollowUserUpdateViewModel *updateViewModel;
@property (nonatomic) BOOL showFollowEntrance;
@property (nonatomic) BOOL forceAllUnread;
@property (copy, nonatomic) NSString *insertIds;

- (unsigned long long)getEnterFrom;
- (void)addBinding;
- (id)sectionComponents;
- (void)fetchListData:(BOOL)a0 completion:(id /* block */)a1;
- (void)setRecentUpdateVCTitle:(id)a0;
- (void)configTrackDict:(id)a0;
- (void)loadMoreListDataWithCompletion:(id /* block */)a0;
- (long long)transforSectionDataStateToBaseDataState:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
