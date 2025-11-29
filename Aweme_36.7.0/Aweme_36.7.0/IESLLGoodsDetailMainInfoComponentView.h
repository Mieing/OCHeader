@class IESLLGoodsDetailMainInfoComponentViewModel, IESLLGDImageTabContainer, IESLLGDItemContainer, IESLLGDPointContainer, UIView, IESLLGoodsDetailMainInfoSkeletonManager, NSString;

@interface IESLLGoodsDetailMainInfoComponentView : LLDitoComponentView <IESLLGDImageItemLoaderProtocol>

@property (retain, nonatomic) IESLLGoodsDetailMainInfoComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLGDItemContainer *itemContainer;
@property (retain, nonatomic) IESLLGDImageTabContainer *tabContainer;
@property (retain, nonatomic) IESLLGDPointContainer *pointContainer;
@property (retain, nonatomic) UIView *sliderIndicator;
@property (retain, nonatomic) IESLLGoodsDetailMainInfoSkeletonManager *skeletonManager;
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
