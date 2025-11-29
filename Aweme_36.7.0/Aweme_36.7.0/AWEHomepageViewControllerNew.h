@class NSString, NSDictionary, AWEAwemeModel, UICollectionView, AWEUserModel;
@protocol AWEUserProfileTabVCDelegate;

@interface AWEHomepageViewControllerNew : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEUserProfileTabBaseMethod>

@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSDictionary *queryDict;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) unsigned long long profileTabStyle;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEUserModel *targetUser;
@property (nonatomic) BOOL isLoading;
@property (copy, nonatomic) NSDictionary *commonTrackDict;
@property (copy, nonatomic) id /* block */ configContainerWidth;
@property (nonatomic) BOOL isPadSplitScreen;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL fromHome;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *tabName;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (void)startTimingForTrack;
- (void)invokeJSWithParameters:(id)a0;
- (void)postStartScrollNotificationWithDragging:(BOOL)a0;
- (id)schemaWithProfileTableStyle:(unsigned long long)a0;
- (void)trackEventForStayTime;
- (void)handleJSBridgeData:(id)a0;
- (void)rotated:(id)a0;
- (void)reloadCollectionHeader;
- (void)reloadData;
- (void).cxx_destruct;
- (id)contentView;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithConfiguration:(id)a0;
- (void)_addObserver;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)applicationWillResignActive;
- (double)headerHeight;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)refreshData;
- (void)_setupUI;

@end
