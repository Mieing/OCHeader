@class AWEGDItemContainer, NSString, AWEGoodsDetailMainInfoComponentViewModel, AWEGDImageTabContainer, AWEGDPointContainer, AWEGoodsDetailMainInfoSkeletonManager, UIView;

@interface AWEGoodsDetailMainInfoComponentView : DitoComponentView <AWEGDImageItemLoaderProtocol>

@property (retain, nonatomic) AWEGoodsDetailMainInfoComponentViewModel *viewModel;
@property (retain, nonatomic) AWEGDItemContainer *itemContainer;
@property (retain, nonatomic) AWEGDImageTabContainer *tabContainer;
@property (retain, nonatomic) AWEGDPointContainer *pointContainer;
@property (retain, nonatomic) AWEGoodsDetailMainInfoSkeletonManager *skeletonManager;
@property (retain, nonatomic) UIView *sliderIndicator;
@property (nonatomic) BOOL isFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)imageEndLoad:(long long)a0;
- (void)addItemContainer;
- (void)addTabContainer;
- (void)addPointContainer;
- (void)addIndicator;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
