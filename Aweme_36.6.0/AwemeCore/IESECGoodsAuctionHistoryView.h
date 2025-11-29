@class NSString, NSArray, UICollectionView, IESECHighlightButton, UIView, NSNumber, UILabel;
@protocol IESECGoodsAuctionHistoryPanelDelegate, IESECEmptyViewProtocol;

@interface IESECGoodsAuctionHistoryView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSNumber *offset;
@property (weak, nonatomic) id<IESECGoodsAuctionHistoryPanelDelegate> delegate;
@property (retain, nonatomic) UICollectionView *auctionHistoryCollection;
@property (retain, nonatomic) UIView *header;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) IESECHighlightButton *confirmButton;
@property (retain, nonatomic) id<IESECEmptyViewProtocol> errorView;
@property (copy, nonatomic) NSArray *auctionData;
@property (copy, nonatomic) NSString *auctionID;
@property (copy, nonatomic) NSString *metaParamsStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateParams:(id)a0;
- (void)loadMoreHistory;
- (void)addInfiniteScroll;
- (void)fetchMoreHistoryWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 auctionID:(id)a1 metaParams:(id)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setupUI;
- (void)confirm;
- (void)reloadView;

@end
