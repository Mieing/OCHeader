@class NSString, UIScreenEdgePanGestureRecognizer, WCSearcher, UIView;
@protocol MMSearchPanGestureControlDelegate;

@interface MMSearchPanGestureController : NSObject <UIGestureRecognizerDelegate> {
    WCSearcher *_searcher;
    UIView *_gestureView;
    double _touchBeginPosX;
    double _dragBeginPosX;
    UIView *_backCoverView;
    UIView *_edgeShadowView;
    UIView *_bottomView;
    double _searchBarPlaceLabelOriginLeftX;
    double _searchBarTextFieldOriginWidth;
    double _searchBarTextFieldExtentableMaxWidth;
}

@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isGesturing;
@property (weak, nonatomic) id<MMSearchPanGestureControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWCSearcher:(id)a0;
- (void)dealloc;
- (void)bindGesture;
- (id)getSearchContainerView;
- (id)getSearchBarPlaceLabel;
- (id)getSearchBarClearButton;
- (void)connectCoverView;
- (void)setInteractionEnabled:(BOOL)a0;
- (void)removeCoverView;
- (double)getSearchBarBottomY;
- (id)getBottomView;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)handlePanGesture:(id)a0;
- (void)updateDragingFrame:(double)a0;
- (void)updateDragingFrame:(double)a0 keepBarUI:(BOOL)a1;
- (void)validateDrag;
- (void)resetView:(BOOL)a0;
- (void).cxx_destruct;

@end
