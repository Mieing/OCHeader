@class NSString, UIPinchGestureRecognizer, UIView, AWEAwemeModel, UIViewController;
@protocol AFDStoryProgressContainerViewProtocol, AFDRichContentContainerViewControllerProtocol;

@interface AWESearchAdRichAwemeFullPageView : UIView <UIGestureRecognizerDelegate, AWEStoryProgressContainerViewDelegate, AFDRichContentProgressControllerDelegate, AFDCustomProgressDelegate>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView<AFDStoryProgressContainerViewProtocol> *progressView;
@property (retain, nonatomic) UIView *richContainerProgressView;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGes;
@property (nonatomic) unsigned long long defaultPlayMode;
@property (retain, nonatomic) UIViewController<AFDRichContentContainerViewControllerProtocol> *richContentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldResponseToPinchGesture:(id)a0;
- (id)albumContext;
- (void)richContainerDidCreateProgressView:(id)a0;
- (id)progressConfig;
- (id)bringInnerAlbumView;
- (void)sendBackInnerAlbumView;
- (id)accessibilityLabels;
- (void)sliderWillBeingDragging;
- (void)sliderDidEndDragging;
- (void)sliderDidEndScrolling;
- (void)progressDidUpdateWithIndex:(long long)a0 progress:(double)a1 duration:(double)a2 animated:(BOOL)a3;
- (void)showProgressView;
- (void)hideProgressView;
- (BOOL)shouldResponseToGesture;
- (void)shouldUpdatePaginatedProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (double)containerViewBottomOffset;
- (void)setupRichContentContainer;
- (id)progressViewInUse;
- (void)showProgressViewAnimated:(BOOL)a0;
- (void)setupRichProgressViewUIWith:(id)a0;
- (BOOL)shouldDisableTransitionPanGestureRecognizer:(id)a0;
- (long long)currentIndex;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setupSubviews;
- (id)currentCell;
- (void)handlePinchGesture:(id)a0;
- (void)updateModel:(id)a0;

@end
