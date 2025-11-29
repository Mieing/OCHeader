@class NSString, UIImageView, UICollectionView, HTSLiveFixedChatSyncData, IESLiveLimitCommentPageTabView;

@interface IESLiveLimitCommentPagePannelView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIImageView *closeView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *backgroundDecorateImageView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveLimitCommentPageTabView *tabView;
@property (retain, nonatomic) HTSLiveFixedChatSyncData *limitModel;
@property (copy, nonatomic) id /* block */ closeCallBack;
@property (copy, nonatomic) id /* block */ limitCommentPageEmojiCellClickCallBack;
@property (copy, nonatomic) id /* block */ limitCommentPageCommentCellClickCallBack;
@property (copy, nonatomic) id /* block */ indexChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)pannelViewHeight;
+ (double)pannelViewWidth;

- (void).cxx_destruct;
- (void)closeAction;
- (void)setData:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (id)flowLayout;
- (void)setupUI;

@end
