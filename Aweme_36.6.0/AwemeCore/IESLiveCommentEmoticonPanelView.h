@class UIView, NSString, NSArray, IESLiveCommentEmoticonPageItem, UIButton, NSDictionary, UICollectionView, IESLiveEmoticonTabBar;
@protocol IESLiveCommentEmoticonPanelViewDelegate;

@interface IESLiveCommentEmoticonPanelView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESLiveCommentEmoticonPageViewDelegate, IESLiveCommentExpandDetailViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *emoticonPages;
@property (nonatomic) BOOL actionTypeHasRestriction;
@property (nonatomic) unsigned long long restrictActionType;
@property (retain, nonatomic) IESLiveEmoticonTabBar *tabBar;
@property (retain, nonatomic) IESLiveCommentEmoticonPageItem *currentSelectedPage;
@property (copy, nonatomic) NSString *defaultPageId;
@property (nonatomic) BOOL landScapeMode;
@property (nonatomic) BOOL didSelectDefault;
@property (nonatomic) BOOL tapToDisplayCell;
@property (retain, nonatomic) UIButton *deleteBtn;
@property (retain, nonatomic) UIView *deleteBtnMask;
@property (weak, nonatomic) id<IESLiveCommentEmoticonPanelViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ shouldDisplayItemBlock;
@property (copy, nonatomic) id /* block */ needDisplayActivityEmoticonBlock;
@property (copy, nonatomic) id /* block */ doesActivityEmoticonExist;
@property (copy, nonatomic) id /* block */ needDisplayFusionEmoticonBlock;
@property (copy, nonatomic) id /* block */ needDisplayLowPcuGuideChatEmojiBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long currentActionType;
@property (nonatomic) unsigned long long detailAreaType;
@property (copy, nonatomic) id /* block */ didShow;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (copy, nonatomic) id /* block */ areaTypeTempChange;
@property (copy, nonatomic) id /* block */ willOutput;
@property (copy, nonatomic) id /* block */ didOutput;
@property (copy, nonatomic) id /* block */ willSend;
@property (copy, nonatomic) id /* block */ didDelete;
@property (copy, nonatomic) id /* block */ finishComment;

- (void)commentEmoticonPageView:(id)a0 didSelectEmoticon:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (void)deleteAction:(id)a0;
- (BOOL)supportActionType:(unsigned long long)a0;
- (void)restrictActionType:(unsigned long long)a0;
- (void)loadItems;
- (void)selectPageItem:(id)a0 withCollectionViewScroll:(BOOL)a1 animated:(BOOL)a2;
- (void)onItemsShow;
- (void)setupDeleteBtn;
- (void)refreshDeleteBtnLayout;
- (void)trackEmojiPanelShow;
- (void)setDefaultSelectePageWithID:(id)a0;
- (void)reloadData;
- (void)dismiss;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)hasTabBar;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)show;
- (void)setupCollectionView;
- (void)setupViews;

@end
