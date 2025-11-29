@class UIView, NSString, NSArray, AWEDoubleColumnSearchMerchandiseFilterManager, UIImageView, MASConstraint, AWEDoubleColumnSearchMerchandiseFilterComponentModel, UICollectionView, UILabel;

@interface AWESearchMerchandiseFilterOptionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *manager;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *expandButton;
@property (retain, nonatomic) UILabel *expandButtonTitleLabel;
@property (retain, nonatomic) UIImageView *expandArrowIcon;
@property (nonatomic) BOOL expandState;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MASConstraint *bottomConstraint;
@property (nonatomic) BOOL renderComplete;
@property (nonatomic) BOOL isNewUIStyle;
@property (nonatomic) BOOL isSubOptionView;
@property (copy, nonatomic) id /* block */ renderCompleteCallback;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (copy, nonatomic) NSArray *subOptionViews;
@property (copy, nonatomic) id /* block */ toggleExpandStateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)expandButtonAction;
- (id)initWithModel:(id)a0 manager:(id)a1 isNewUIStyle:(BOOL)a2;
- (id)subCellModels;
- (void)itemSelectTrackWithModel:(id)a0 index:(long long)a1 isSelected:(BOOL)a2 mergeParams:(id)a3;
- (void)itemShowTrackWithModel:(id)a0 index:(long long)a1 mergeParams:(id)a2;
- (double)collectionCellMargin;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (double)contentPadding;
- (void)setupUI;
- (void)addAction;

@end
