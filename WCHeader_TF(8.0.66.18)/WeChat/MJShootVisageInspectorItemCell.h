@class NSString, MMUIView, MMWebImageView, MMUILabel;

@interface MJShootVisageInspectorItemCell : UICollectionViewCell <MJMaterialLoadingStatusView>

@property (retain, nonatomic) MMUIView *iconContainerView;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUIView *loadingView;
@property (retain, nonatomic) MMUIView *blurView;
@property (retain, nonatomic) MMUIView *borderView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) BOOL isCellSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setupViews;
- (void)prepareForReuse;
- (void)reset;
- (void)configWithItem:(id)a0;
- (id)mj_loadingContainerView;
- (void).cxx_destruct;

@end
