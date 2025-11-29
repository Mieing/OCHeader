@class NSArray, UICollectionView, NSString, RxCollectionViewDiffableDataSource;
@protocol RTVEffectGameListCellDelegate, RTVEffectGameListViewController, RxInjector, RTVXRControllerInjector, RTVXRRoomSessionControllerInterface, RTVEffectGameManager;

@interface RTVEffectGameListDataSource : NSObject <RTVEffectGameListDataSource, RTVUICellModelDiffableInterface, RTVXRRoomSessionControllerObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVEffectGameListCellDelegate, RTVEffectGameListViewController> cellDelegate;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) id<RTVEffectGameManager> effectGameManager;
@property (retain, nonatomic) NSArray *remoteGames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (id)__onCallParticipators:(id)a0;
- (void)__registerClass;
- (void)__createDataSource;
- (id)__applyPlaceholderSnapshot;
- (id)__applyRemoteSnapshot;
- (id)__itemIdentifierForIndexPath:(id)a0;
- (id)__applySnapshotWithGames:(id)a0;
- (id)__sectionIdentifier;
- (void)__applySnapshotWithIdentifiers:(id)a0;
- (void)__showRetryView:(BOOL)a0;
- (void)__showEmptyView:(BOOL)a0;
- (id)effectModelForIndexPath:(id)a0;
- (void)updateInGameGameModel:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;

@end
