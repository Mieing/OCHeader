@class UIView, GetSensitivieWordResp_ResponseExtra, IESLiveTagsLayout, NSString, UIButton, IESLiveSensitiveStore, NSMutableArray, IESLiveTagsView, UILabel, GetSensitivieWordResp_ResponseData;

@interface IESLiveSensitiveNewView : UIView <IESLiveTagsViewDataSource>

@property (retain, nonatomic) IESLiveSensitiveStore *store;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UIView *redView;
@property (retain, nonatomic) UIView *backView;
@property (nonatomic) BOOL isDelClick;
@property (retain, nonatomic) NSMutableArray *operateItems;
@property (nonatomic) BOOL isNewStyle;
@property (retain, nonatomic) GetSensitivieWordResp_ResponseData *dataModel;
@property (retain, nonatomic) GetSensitivieWordResp_ResponseExtra *extraModel;
@property (retain, nonatomic) UIButton *addButton;
@property (copy, nonatomic) id /* block */ delBlock;
@property (copy, nonatomic) id /* block */ changedBlock;
@property (retain, nonatomic) IESLiveTagsView *sensitiveCollectionView;
@property (retain, nonatomic) IESLiveTagsLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadCollectionView;
- (double)labelHeight;
- (long long)numberOfItems:(id)a0;
- (id)gradientLayer:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addSuccess:(id)a0;
- (void)deleteSuccess:(BOOL)a0 index:(long long)a1;
- (void)hideRedView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1 isNewStyle:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isNewStyle:(BOOL)a1;
- (void)shouldShowRedView;
- (void)refreshTipsAndButtons;
- (void)deleteTagIndexPathItem:(id)a0;
- (void)resetCollectionOffset;
- (void)updateRedViewKey;
- (id)items:(id)a0;
- (id)itemOfIndex:(long long)a0;
- (id)tagsView:(id)a0 viewForItemAtIndex:(long long)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)setBackgroundColor:(id)a0;
- (void)_commonInit;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)layoutSubviews;
- (void)updateData;

@end
