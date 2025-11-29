@class AWESearchLayoutDelegateContainerView, NSString, NSDictionary, AWESearchCachalotECommerceContext, AWESearchEcommerceActionRecord;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchCachalotECommerceBaseCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell, AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWESearchLayoutDelegateContainerView *p_container;
@property (nonatomic) double currPlaybackTime;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly, nonatomic) AWESearchCachalotECommerceContext *context;
@property (retain, nonatomic) AWESearchEcommerceActionRecord *actionRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)componentPageViewWillAppear:(BOOL)a0;
- (void)componentPageViewDidAppear:(BOOL)a0;
- (void)componentPageViewWillDisappear:(BOOL)a0;
- (void)componentPageViewDidDisappear:(BOOL)a0;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)componentActivationDidChange:(BOOL)a0;
- (void)componentDidEndDisplay;
- (void)componentHighlighted:(BOOL)a0 backgroundView:(id)a1;
- (void)componentPrepareForReuse;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
