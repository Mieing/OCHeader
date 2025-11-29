@class UIView, NSString, NSArray, AWESearchFilterBaseManager, UIImageView, MASConstraint, AWEDoubleColumnSearchMerchandiseFilterComponentModel, UICollectionView, UILabel;

@interface AWESearchPOIHotelMultipleSelectionFilterOptionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) AWESearchFilterBaseManager *manager;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *expandButton;
@property (retain, nonatomic) UILabel *expandButtonTitleLabel;
@property (retain, nonatomic) UIImageView *expandArrowIcon;
@property (nonatomic) BOOL expandState;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MASConstraint *bottomConstraint;
@property (nonatomic) BOOL renderComplete;
@property (nonatomic) BOOL isSubOptionView;
@property (copy, nonatomic) id /* block */ renderCompleteCallback;
@property (copy, nonatomic) id /* block */ didTapComponentBlock;
@property (copy, nonatomic) id /* block */ didShowComponentBlock;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (copy, nonatomic) NSArray *subOptionViews;
@property (copy, nonatomic) id /* block */ toggleExpandStateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)expandButtonAction;
- (id)initWithModel:(id)a0 manager:(id)a1;
- (id)subCellModels;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)setupUI;
- (void)addAction;

@end
