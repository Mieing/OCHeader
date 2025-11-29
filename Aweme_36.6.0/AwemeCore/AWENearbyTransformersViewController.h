@class NSString, NSArray, AWENearbyTransformersViewModel, UIScrollView, UIView;
@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbyTransformersViewController : UIViewController <AWENearbyTransformerItemViewDataSource, AWENearbyTransformerItemViewDelegate, AWEViewControllerProtocol, AWENearbySkyLightElementViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *transformerItemsView;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) UIScrollView *gestureAuxiliaryView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWENearbyTransformersViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;

+ (double)heightForTransformers:(id)a0 withThumbnailProcess:(double)a1;

- (void)setScrollEnable:(BOOL)a0;
- (void)setupBinding;
- (unsigned long long)elementViewType;
- (double)thumbnailProcess;
- (BOOL)shouldShowColorTransformerTab;
- (void)trackShowWithTransformer:(id)a0;
- (void)didClickWithTransformer:(id)a0;
- (void)setThumbnailProcess:(double)a0;
- (BOOL)shouldShowBackground;
- (BOOL)inFeed;
- (void)updateWithTransformers:(id)a0;
- (id)transformerItemViewWithTransformer:(id)a0 style:(long long)a1;
- (void)setLineViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (double)height;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (long long)style;
- (void)setupUI;
- (void)updateUI;

@end
