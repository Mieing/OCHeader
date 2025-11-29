@class NSString, MMUIView, UIView, MMWebImageView, MMUILabel;

@interface MJStyleEditStyleCommonCell : UICollectionViewCell <MJMaterialLoadingStatusView, MJStyleEditCollectionViewCellProtocol>

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) MMUIView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)prepareForReuse;
- (void)updateImageWith:(id)a0;
- (void)updateSelected:(id)a0;
- (void)updateSelectionEnabled:(id)a0;
- (id)mj_loadingContainerView;
- (void).cxx_destruct;

@end
