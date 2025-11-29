@class NSString, BDPUniqueID, BDPShareTask, BDPModel, NSMutableArray, UICollectionView, NSLayoutConstraint, NSDictionary, UILabel;
@protocol BDPIMPluginDelegate;

@interface AWEPluginFriendsShareViewImpl : NSObject <BDPFriendsShareViewPluginDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, AWECollectionFriendsShareCellDelegate>

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<BDPIMPluginDelegate> imPlugin;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPModel *model;
@property (copy, nonatomic) NSString *templateID;
@property (retain, nonatomic) BDPShareTask *shareTask;
@property (copy, nonatomic) NSDictionary *gameInfo;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct CGSize { double width; double height; } nameSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getUniqueID;
- (void)setupItems;
- (void)event:(id)a0 param:(id)a1;
- (id)getGameInfo;
- (void)shareMessageToFriendsWithParam:(id)a0;
- (id)hg_getFriendsShareView;
- (void)requestGameInfo;
- (id)bdp_getFriendsShareViewWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;

@end
