@class NSString, IESLiveLinkmicPreStreamUserService, UICollectionView;
@protocol AWELiveBigPartyGuestListDelegate;

@interface AWELiveBigPartyGuestListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic) BOOL enableFeedVideoTalkEffect;
@property (nonatomic) BOOL enableFeedVideoTalkListUpdate;
@property (nonatomic) long long maxGuestNum;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveLinkmicPreStreamUserService *userService;
@property (weak, nonatomic) id<AWELiveBigPartyGuestListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateListModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maxGuestNum:(long long)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutUI;

@end
