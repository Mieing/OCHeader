@class UIView, NSString, ACCVoiceChangerViewModel, UIButton, NSMutableArray, UICollectionView, UILabel, NSIndexPath;

@interface ACCVoiceChangerSelectCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UIButton *headerBackButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *effectList;
@property (retain, nonatomic) NSIndexPath *previousSelectedIndexPath;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (copy, nonatomic) id /* block */ didSelectVoiceEffectHandler;
@property (copy, nonatomic) id /* block */ didTapVoiceEffectHandler;
@property (copy, nonatomic) id /* block */ clearVoiceEffectHandler;
@property (copy, nonatomic) id /* block */ voiceEffectPreviewHandler;
@property (nonatomic) BOOL isPreprocessing;
@property (weak, nonatomic) ACCVoiceChangerViewModel *viewModel;
@property (copy, nonatomic) id /* block */ backPreviouPageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickBackButton;
- (long long)numberOfCellPerRow;
- (void)selectNoneItemIfNeeded;
- (void)p_clearSeletedCellExcept:(id)a0;
- (void)p_handleCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)p_selectWithCell:(id)a0 model:(id)a1 indexPath:(id)a2 resultModel:(id)a3;
- (void)p_selectAndDownloadEffectAtIndexPath:(id)a0;
- (void)recoverToVoiceID:(long long)a0;
- (void)resetSelectedIndex;
- (void)updateWithVoiceEffectList:(id)a0 recoverWithVoiceID:(long long)a1;
- (void)scrollToSelectedIndexIfNeeded;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
