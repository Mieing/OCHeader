@class AWESearchAIGCDoubleVideoLoadMoreContainer, AWESearchAIGCDoubleVideoLoadMoreTopContainer, AWESearchAIGCDoubleVideoLoadMoreLayer, UIView;
@protocol CachalotRenderPipelineComponentViewModel, DUXLoadingViewProtocol;

@interface AWESearchAIGCDoubleVideoLoadMoreView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) UIView<DUXLoadingViewProtocol> *loadingContainer;
@property (retain, nonatomic) AWESearchAIGCDoubleVideoLoadMoreContainer *loadMoreContainer;
@property (retain, nonatomic) AWESearchAIGCDoubleVideoLoadMoreLayer *loadMoreLayer;
@property (retain, nonatomic) AWESearchAIGCDoubleVideoLoadMoreTopContainer *loadMoreTopContainer;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> bindViewModel;
@property (nonatomic) long long waitCmdCount;
@property (nonatomic) long long perDisplayCount;
@property (retain, nonatomic) UIView *spacingView;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)themeChange;
- (void)componentWillDisplay;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)updateViewBackGround;
- (void)updateLayerZPosition;
- (id)fetchLoadMoreModel;
- (void)updateViewType:(unsigned long long)a0;
- (void)customLoadingParticleView;
- (void)trackLoadMoreButtonShow;
- (void)updateSpacingHeight:(double)a0;
- (void)trackLoadMoreButtonClick;
- (void)handleLoadMore:(id)a0;
- (void)handleHistoryUnFold:(id)a0 dataModel:(id)a1;
- (void)changeViewType:(unsigned long long)a0 loadMoreModel:(id)a1;
- (BOOL)enableLoadingAssetReplaceEnable;
- (void)loadMoreTapGesture:(id)a0;
- (void)updateDoubleVideoCmdArray:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)layoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)createUI;

@end
