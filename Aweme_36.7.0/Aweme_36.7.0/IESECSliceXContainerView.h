@class IESECSliceXContainerUpdateContext, IESECSliceXBaseView, NSString, IESECSliceXBaseElementView, IESECSliceXContainerInfo, SLIPerfMetrics, IESECSliceXContainerLoadContext;

@interface IESECSliceXContainerView : UIView <IESECSliceXFlexObserver> {
    IESECSliceXContainerLoadContext *_loadContext;
    IESECSliceXContainerUpdateContext *_updateContext;
}

@property (retain, nonatomic) IESECSliceXBaseView *contentView;
@property (retain, nonatomic) IESECSliceXBaseElementView *rootView;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double previousScaleFactor;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) IESECSliceXContainerInfo *info;
@property (readonly, nonatomic) BOOL isLoadingRootView;
@property (nonatomic) BOOL shouldHitTestPassthroughRootView;
@property (readonly, nonatomic) NSString *templateName;
@property (retain, nonatomic) SLIPerfMetrics *perfMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)flexDidLayout:(id)a0;
- (id)popLoadContext;
- (id)popUpdateContext;
- (void)pushLoadContextWithURL:(id)a0 metaData:(id)a1 complete:(id /* block */)a2;
- (id)createElementViewContextWithPack:(id)a0;
- (void)updateScaleFactorWithTemplateConfig:(id)a0;
- (void)updateGlobalPropsWithScaling;
- (void)registerAppThemeChangedAutoRefreshBlock;
- (void)updateRootViewWithoutCalculateSizeWithDataSource:(id)a0 complete:(id /* block */)a1;
- (void)updateRootViewWithDataSource:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 complete:(id /* block */)a2;
- (void)pushUpdateContextWithDataSource:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 complete:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })updateRootViewWithDataSource:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (void)pushUpdateContextWithDataSource:(id)a0 complete:(id /* block */)a1;
- (void)updateRootViewWithoutCalculateSizeWithDataSource:(id)a0 error:(id *)a1;
- (void)updateGlobalPropsWithAppTheme;
- (id)dataDictWithGlobalPropsAndDataSource:(id)a0;
- (void)beforeUpdateElementView;
- (void)afterUpdateElementView;
- (void)updateZPositionWithRootElement:(id)a0;
- (id)initWithSliceXInstance:(id)a0;
- (void)handleAction:(id)a0 withElementView:(id)a1;
- (void)loadRootViewWithResourceURL:(id)a0 resourceMetaData:(id)a1 complete:(id /* block */)a2;
- (void)updateRootViewWithDataSource:(id)a0 complete:(id /* block */)a1;
- (void)loadRootViewWithResourceData:(id)a0 resourceMetaData:(id)a1 error:(id *)a2;
- (BOOL)loadRootViewWithResourceURL:(id)a0 resourceMetaData:(id)a1 error:(id *)a2;
- (struct CGSize { double x0; double x1; })updateRootViewWithDataSource:(id)a0 error:(id *)a1;
- (id)getStorageDataWithKey:(id)a0 filter:(id /* block */)a1 error:(id *)a2;
- (id)getElementViewWithKey:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)handleAction:(id)a0;

@end
