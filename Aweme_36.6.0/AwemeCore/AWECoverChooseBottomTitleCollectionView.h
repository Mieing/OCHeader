@class NSArray, UICollectionView, NSString, AWEVideoPublishViewModel, UIView;
@protocol ACCTextLoadingViewProtcol, AWECoverChooseBottomTitleCollectionViewDelegate;

@interface AWECoverChooseBottomTitleCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (retain, nonatomic) UIView *retryView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSString *selectedTitle;
@property (weak, nonatomic) id<AWECoverChooseBottomTitleCollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (BOOL)shouldShowDefaultText;
- (void)p_reloadTitle:(id)a0 selected:(BOOL)a1;
- (Class)collectionCellClass;
- (id)p_objectAtIndexPath:(id)a0;
- (void)configCell:(id)a0 forModel:(id)a1 selected:(BOOL)a2;
- (void)p_downloadTitles;
- (id)collectionFlowLayout;
- (void)configRetryView:(id)a0 withLabel:(id)a1 andButton:(id)a2;
- (BOOL)shouldForceDisableHintView;
- (id)titleModelWithTitle:(id)a0;
- (void)selectTitle:(id)a0;
- (void)reloadData;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)retryAction;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)p_init;

@end
