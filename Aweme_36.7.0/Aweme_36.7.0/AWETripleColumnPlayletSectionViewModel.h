@class AWEPlayletTracker, AWEPlayletPageContext;

@interface AWETripleColumnPlayletSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (retain, nonatomic) AWEPlayletTracker *tracker;
@property (nonatomic) long long topTabOrder;
@property (nonatomic) BOOL needShowHeader;
@property (nonatomic) BOOL isActorCardList;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
