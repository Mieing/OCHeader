@class CAGradientLayer, NSString, UILabel, UIView;
@protocol CachalotRenderPipelineComponentViewModel, AWEModernFeedCellContext;

@interface AWESearchAIGCFoldButton : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAGradientLayer *borderLayer;
@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) BOOL isFolded;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (id)commonTrackParams;
- (void)configUI;
- (void)componentWillDisplay;
- (void)updateGradientLayerFrame;
- (void)configGesture;
- (void)configNoti;
- (void)refreshDynamicColors;
- (void)configGradientLayer;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (id)componentView;
- (void)tap;
- (void)updateWithViewModel:(id)a0;

@end
