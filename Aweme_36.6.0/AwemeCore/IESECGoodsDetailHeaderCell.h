@class UIView, NSString, IESECGoodsDetailHeaderContainerBGView, NSArray, IESECGoodsDetailHeaderGaussBlurBGView, IESECGoodsDetailHeaderServiceProvider, IESECoodsDetailHeaderContentBaseCell, IESECGoodsDetailHeaderContentModel;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderViewManagerServeice, IESECGoodsDetailHeaderPreviewItemCellDelegate;

@interface IESECGoodsDetailHeaderCell : UICollectionViewCell <IESECGoodsDetailHeaderPreviewItemCellDelegate>

@property (retain, nonatomic) IESECGoodsDetailHeaderGaussBlurBGView *gaussBlurView;
@property (nonatomic) unsigned long long statusBlurMode;
@property (nonatomic) BOOL shouldContentLayoutFromTop;
@property (retain, nonatomic) IESECoodsDetailHeaderContentBaseCell *contentCell;
@property (retain, nonatomic) IESECGoodsDetailHeaderContentModel *model;
@property (retain, nonatomic) IESECGoodsDetailHeaderContainerBGView *multiPreviewBgView;
@property (copy, nonatomic) NSArray *multiPreviewModelList;
@property (copy, nonatomic) NSArray *multiPreviewViewList;
@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (nonatomic) double contentScrollOffset;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (retain, nonatomic) UIView *frontGround;
@property (nonatomic) BOOL shouldScaleAndBlurImage;
@property (nonatomic) BOOL isPreviewItem;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) BOOL needExtendAndAutoPlay;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderPreviewItemCellDelegate> previewItemdelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)clearView;
- (void)layoutSubviewAsMultiPreviewItem;
- (void)layoutSubviewAsMultiPreview;
- (void)tryLayoutStatusBarBlurView;
- (void)layoutFrontGround;
- (void)clearViewWithModel:(id)a0;
- (id)multiPreviewModuleList;
- (void)configUIAsMultiPreview;
- (double)videoWHRatioWithModel:(id)a0;
- (void)removeFrontGround;
- (void)addFrontGround;
- (void)handlePreviewTap:(id)a0;
- (void)didSelectPreviewAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
