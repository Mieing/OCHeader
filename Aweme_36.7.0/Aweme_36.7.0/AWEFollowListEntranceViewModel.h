@class AWEFollowListCategoryStatisticsModel, AWERelationFollowCleanListDataController, NSNumber, AWERelationCleanFollowingListResponse;

@interface AWEFollowListEntranceViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWERelationFollowCleanListDataController *cleanListdataController;
@property (nonatomic) long long groupCount;
@property (retain, nonatomic) AWERelationCleanFollowingListResponse *response;
@property (retain, nonatomic) AWEFollowListCategoryStatisticsModel *categoryResponse;
@property (retain, nonatomic) NSNumber *categoryFollowingGroupCount;
@property (retain, nonatomic) NSNumber *cachedGroupCount;
@property (nonatomic) BOOL entranceHasShowTrack;
@property (nonatomic) BOOL unreadNeedTotal;

- (double)classificationEntranceHeight;
- (double)entranceHeight;
- (void)cleanListEntranceUpdate:(id /* block */)a0;
- (void)refreshHeaderWithCleanResponse:(id)a0 isCacheData:(BOOL)a1;
- (void)refreshHeaderWithGroupCount:(long long)a0;
- (void)headerEntranceUpdate:(id /* block */)a0;
- (void)followGroupEntranceUpdate:(id /* block */)a0;
- (void)refreshGroupCount:(long long)a0;
- (void)fetchCategoryCount;
- (void).cxx_destruct;

@end
