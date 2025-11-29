@class UIView, DVEMediaTimelineScaleHandler, DVEVideoTrackPreviewView, DVEMultipleTrackController, DVELineLayerView, NSString, DVETimelineRuler, MASConstraint, DVEOriginalSoundButton, DVEMultipleTrackView, DVETrackPanelContext;
@protocol DVEVideoTrackPreviewTransitionDelegate, DVEToastProtocol, DVEMediaTimelineContentViewDelegate, DVEVideoOverTimeCoverViewProtocol;

@interface DVEMediaTimelineContentView : UIView <DVEMultipleTrackViewDelegate, DVEVideoTrackPreviewDelegate, DVECoreActionDelegate, UIGestureRecognizerDelegate, DVEOriginalSoundButtonDelegate>

@property (class, readonly, nonatomic) double multipleTrackAreaTop;
@property (class, readonly, nonatomic) double videoAreaNormalTop;
@property (class, readonly, nonatomic) double videoAreaMultiModeTop;

@property (retain, nonatomic) DVEMediaTimelineScaleHandler *scaleHandler;
@property (retain, nonatomic) DVEVideoTrackPreviewView *videoTrackView;
@property (retain, nonatomic) DVEMultipleTrackView *multipleTrackArea;
@property (retain, nonatomic) DVEMultipleTrackController *multipleTrackController;
@property (retain, nonatomic) DVETimelineRuler *ruler;
@property (retain, nonatomic) MASConstraint *videoAreaVerticalConstraint;
@property (retain, nonatomic) MASConstraint *multipleTrackAreaTopConstraint;
@property (retain, nonatomic) MASConstraint *videoAreaHeightConstraint;
@property (retain, nonatomic) UIView<DVEVideoOverTimeCoverViewProtocol> *overTimeCoverView;
@property (retain, nonatomic) DVELineLayerView *lineLayerView;
@property (retain, nonatomic) id<DVEToastProtocol> toast;
@property (retain, nonatomic) DVETrackPanelContext *context;
@property (weak, nonatomic) id<DVEMediaTimelineContentViewDelegate> delegate;
@property (weak, nonatomic) id<DVEVideoTrackPreviewTransitionDelegate> transitionDelegate;
@property (retain, nonatomic) DVEOriginalSoundButton *originalSoundButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTapGesture;
- (void)setupPinchGesture;
- (void)setupCoverView;
- (void)createCoverView;
- (void)nleEditorDidChange;
- (void)setupVideArea;
- (void)willStartLongPressSegmentWithView:(id)a0;
- (void)didEndLongPressSegmentWithView:(id)a0;
- (void)didChangePanSegmentWithView:(id)a0 offset:(double)a1;
- (void)videoTrackPreview:(id)a0 didSelectSegment:(id)a1 clip:(BOOL)a2;
- (void)setupRuler;
- (void)setupOriginalSoungButton;
- (void)setupMultipleTrackArea;
- (double)calculateCoverViewLeftOffset;
- (void)updateCoverViewStatus;
- (BOOL)p_multipleTrackViewShouldHidden;
- (double)multipleTrackAreaTopInset;
- (void)updateMultipleTrackView:(unsigned long long)a0 hidden:(BOOL)a1;
- (void)updateConstraintsWithMultipleTrackHidden:(BOOL)a0;
- (void)refreshCoverViewIfNeeded;
- (id)wrapScrollView;
- (void)didClickMultipleTrackView:(id)a0;
- (void)clickSoundButton;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)refreshUI;
- (void)setupUI;
- (void)handleTap:(id)a0;
- (void)addObservers;

@end
