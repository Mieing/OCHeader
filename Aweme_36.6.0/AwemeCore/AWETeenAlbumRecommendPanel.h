@class UIView, AWETeenAlbumDataController, AWEMinorAlbum, NSString, AWETeenAlbumRecommendLoadingView, AWETeenAlbumRecommendNoDataView, UIPanGestureRecognizer, AWETeenAlbumRecommendCollectionView, UIVisualEffectView, AWETeenExtraParamModel, AWETeenAlbumRecommendNetErrorView;
@protocol AWETeenPanelPresentPortocol;

@interface AWETeenAlbumRecommendPanel : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (retain, nonatomic) AWEMinorAlbum *originAlbum;
@property (retain, nonatomic) AWETeenExtraParamModel *extra;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *listContainView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) AWETeenAlbumRecommendCollectionView *collectionView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) unsigned long long panelState;
@property (nonatomic) BOOL didShowRecommendView;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) AWETeenAlbumRecommendNoDataView *noDataView;
@property (retain, nonatomic) AWETeenAlbumRecommendNetErrorView *netErrorView;
@property (retain, nonatomic) AWETeenAlbumRecommendLoadingView *loadingView;
@property (weak, nonatomic) id<AWETeenPanelPresentPortocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_dismiss;
- (void)p_setupBind;
- (id)initWithDataController:(id)a0 originAlbum:(id)a1 extra:(id)a2;
- (void)p_addGestureRecognizer;
- (void)p_presentToHalfScreenByGesture;
- (void)p_presentToNearFullScreenByGesture;
- (void)p_animationWithOffsety:(double)a0;
- (void)p_dismissOrPresentByOffsety:(double)a0 velocity:(double)a1;
- (void)p_onSingleTap;
- (void)p_onPanGesture:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)present;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
