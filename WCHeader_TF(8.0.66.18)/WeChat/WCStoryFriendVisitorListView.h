@class UILabel, NSString, UICollectionView;
@protocol WCStoryFriendVisitorListViewDelegate, WCStoryFriendVisitorListViewDataSource;

@interface WCStoryFriendVisitorListView : MMUIView <UICollectionViewDataSource, WCStoryFriendVisitHeadCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) id<WCStoryFriendVisitorListViewDelegate> delegate;
@property (weak, nonatomic) id<WCStoryFriendVisitorListViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)scrollToBottom:(BOOL)a0;
- (void)setup;
- (void)setupSubViews;
- (void)setupGesture;
- (void)updateUI;
- (void)handlePanGesture:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)WCStoryFriendVisitHeadCell:(id)a0 didClickHeadViewWithComment:(id)a1;
- (id)flowLayout;
- (void).cxx_destruct;

@end
