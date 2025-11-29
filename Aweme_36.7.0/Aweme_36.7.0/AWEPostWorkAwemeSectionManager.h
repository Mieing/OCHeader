@class NSString;

@interface AWEPostWorkAwemeSectionManager : AWEUserWorkSectionManager <AWEAwemeDetailTableViewControllerDelegate, AWEPostWorkAwemeSectionManagerProtocol, AWEUserWorkLongPressPinServiceProtocol>

@property (nonatomic) BOOL didSelectingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (BOOL)detailTableViewControllerNeedUpdateBottomBarWhenReload:(id)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)hasCreatedLiveRoom;
- (id)privateEntrance;
- (BOOL)enableAsyncToTransmissionNode;
- (id)padService;
- (id)createDetailTableViewControllerWithAweme:(id)a0 atIndexPath:(id)a1 logExtraDic:(id)a2;
- (id)getPinedAwemeList;
- (id)poiAnchorLifeExtraInfoParams;
- (id)cellLeftTopComponentService:(id)a0 with:(id)a1;
- (id)douGuideTagCommonParamsWithModel:(id)a0;
- (void)handlePostWorkSelectWithIndexPath:(id)a0 awemeModel:(id)a1 componentCell:(id)a2;
- (id)viewController;
- (id)viewModel;
- (id)dataController;
- (void)containerViewDidLoad;

@end
