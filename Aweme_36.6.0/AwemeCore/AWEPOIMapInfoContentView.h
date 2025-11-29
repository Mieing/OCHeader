@class AWEPOINearbyHotPrefetcher, AWEUILoadingView, AWEPOIMapContext, UICollectionView, NSDictionary, UILabel, AWEPOIDetailResponse, UIView, AWEPOICommonModalViewController, NSString, AWEPOINearbyHotViewController, AWEGradientView, AWEPOILynxContainerView;
@protocol AWEPOIMapInfoHeaderViewProtocol, AWEPOIModalContentDelegate;

@interface AWEPOIMapInfoContentView : UIScrollView <UIScrollViewDelegate, UICollectionViewDelegate, UIGestureRecognizerDelegate, AWEPOIModalContentDelegate, AWEPOICubeViewDelegate, AWEPOICommonModalCustomContentProtocol>

@property (retain, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (retain, nonatomic) UIView<AWEPOIMapInfoHeaderViewProtocol> *mapHeaderView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *aroundLabel;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) UIView *topBackgroundView;
@property (retain, nonatomic) AWEPOINearbyHotViewController *nearbyHotVC;
@property (retain, nonatomic) UICollectionView *nearbyCollectionView;
@property (nonatomic) struct CGPoint { double x; double y; } panStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } panStartContentOffset;
@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) double nearbyHotRecSectionHeight;
@property (nonatomic) long long contentType;
@property (nonatomic) BOOL isExpanded;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (weak, nonatomic) id<AWEPOIModalContentDelegate> modalContentDelegate;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *mapSessionID;
@property (retain, nonatomic) AWEPOINearbyHotPrefetcher *prefetcher;
@property (weak, nonatomic) AWEPOIMapContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) AWEPOICommonModalViewController *modalVC;

- (void)bindStateAndAction;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeViewDidFirstScreen:(id)a0;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)enableContentScroll;
- (void)disableContentScroll;
- (void)willChangeToModalPageSize:(id)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)contentOffsetYDidChangeTo:(double)a0;
- (void)willPresentVCWithIsModal:(BOOL)a0;
- (void)willReloadMapContent;
- (double)initialPageHeight;
- (id)initWithPOIDetail:(id)a0 logExtra:(id)a1 context:(id)a2;
- (id)initialPageModel;
- (void)updateNearbyContentWithType:(long long)a0 recCubeModel:(id)a1;
- (id)emptyPageModel;
- (double)contentWithoutCollectionHeight;
- (void)p_setupHeaderView;
- (void)p_setupLoadingView;
- (double)p_emptyContentHeight;
- (void)p_setupNearbyHotVC;
- (void)p_updatePageSizes;
- (double)p_nearbyHotRecContentHeight;
- (double)contentSizeHeightWithFrameHeight:(double)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)reload;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (struct CGPoint { double x0; double x1; })currentContentOffset;

@end
