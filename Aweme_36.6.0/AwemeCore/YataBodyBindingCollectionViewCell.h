@class NSString, YataABSViewHolder, UIView, YataBindCellViewModel;

@interface YataBodyBindingCollectionViewCell : UICollectionViewCell <IGListBindable>

@property (retain, nonatomic) YataBindCellViewModel *viewModel;
@property (retain, nonatomic) UIView *blankContent;
@property (retain, nonatomic) UIView *content;
@property (retain, nonatomic) YataABSViewHolder *viewHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)recoverContent;
- (void)setupContentAndTryBindData;
- (void)addBlankContentIfNeeded;
- (BOOL)isRootViewCreatedFailed:(id)a0;
- (void)checkCellSliceMismatch;
- (void)updateDataWithViewHolder:(id)a0 contentView:(id)a1 preSize:(struct CGSize { double x0; double x1; })a2;
- (void)bindBlankContent;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;

@end
