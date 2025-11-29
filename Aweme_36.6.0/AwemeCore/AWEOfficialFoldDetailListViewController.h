@class NSArray, UICollectionView, NSMutableSet, NSString, AWEIMMarkMoveNoticeTipView;
@protocol AWEIMDYOfficialDataManagerProtocol, AWEOfficialFoldDetailListViewNoticeTipProtocol;

@interface AWEOfficialFoldDetailListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWEIMMarkMoveNoticeTipViewProtocol>

@property (retain, nonatomic) AWEIMMarkMoveNoticeTipView *noticeTipView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *foldGroupList;
@property (nonatomic) unsigned long long entryTab;
@property (retain, nonatomic) NSMutableSet *showedCells;
@property (nonatomic) BOOL hasShowTipView;
@property (nonatomic) BOOL tipViewHasInteracted;
@property (weak, nonatomic) id<AWEIMDYOfficialDataManagerProtocol> officialDataManager;
@property (nonatomic) long long group;
@property (nonatomic) long long chatScene;
@property (nonatomic) BOOL shouldHideBackUnreadCount;
@property (weak, nonatomic) id<AWEOfficialFoldDetailListViewNoticeTipProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (id)enterFrom;
- (void)setDataList:(id)a0;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)didTapMarkMoveNoticeTipView:(id)a0;
- (void)didTapMarkMoveNoticeTipViewTailToken:(id)a0;
- (void)didDeleteMarkMoveNoticeTipView:(id)a0;
- (double)noticeTipHeaderHeight;
- (BOOL)enableAddOrderTopTipView;
- (void)addMoveNoticeTipView;
- (void)trackEvent:(id)a0 model:(id)a1;
- (long long)unreadCountWithModel:(id)a0;
- (long long)demoteStateWithModel:(id)a0;
- (void)trackMarkMoveNoticeTipViewDelete;
- (void)__handleMoveNoticeTipViewTap:(id)a0;
- (void)trackMarkMoveNoticeTipViewClick;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionViewLayout;
- (void)viewDidLoad;
- (void)dealloc;

@end
