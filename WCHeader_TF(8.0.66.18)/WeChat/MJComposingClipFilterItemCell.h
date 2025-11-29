@class NSString, UIImageView, MMUIView, MMWebImageView, MJSegmentFilterInspectorViewModel, MMUILabel;

@interface MJComposingClipFilterItemCell : UICollectionViewCell <MJMaterialLoadingStatusView>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUIView *loadingView;
@property (nonatomic) BOOL isCellSelected;
@property (retain, nonatomic) UIImageView *disableImageView;
@property (readonly, nonatomic) MJSegmentFilterInspectorViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)commonInit;
- (void)configCellWithFilter:(id)a0;
- (id)mj_loadingContainerView;
- (void).cxx_destruct;

@end
