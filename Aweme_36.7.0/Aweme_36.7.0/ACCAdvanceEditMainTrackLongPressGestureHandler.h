@class UIView, UILongPressGestureRecognizer, CADisplayLink, NSString, ACCAdvanceEditMainTrackLongPressItem, NSMutableDictionary, NLETrackSlot_OC, ACCAdvanceEditMainTrackFrameView, DVEVideoThumbnailManager;
@protocol ACCAdvanceEditMainTrackActionServiceProtocol, ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider, ACCTCETrackEventServiceProtocol;

@interface ACCAdvanceEditMainTrackLongPressGestureHandler : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *realShownView;
@property (retain, nonatomic) ACCAdvanceEditMainTrackFrameView *gestureView;
@property (retain, nonatomic) NSMutableDictionary *longPressFichePool;
@property (retain, nonatomic) NLETrackSlot_OC *curEditingSlot;
@property (retain, nonatomic) ACCAdvanceEditMainTrackLongPressItem *curActiveItem;
@property (retain, nonatomic) CADisplayLink *longPressDisplayLink;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCAdvanceEditMainTrackActionServiceProtocol> mainTrackActionService;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (nonatomic) unsigned long long moveDirection;
@property (nonatomic) long long startIndex;
@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)itemMargin;
- (void)longPressWillStart:(id)a0 onView:(id)a1 withSlot:(id)a2;
- (void)longPressDidChange:(id)a0 onView:(id)a1 withSlot:(id)a2;
- (void)longPressWillEnd:(id)a0 onView:(id)a1 withSlot:(id)a2;
- (struct CGSize { double x0; double x1; })longPressRectSize;
- (BOOL)isTimeLabelShownWithSlot:(id)a0;
- (void)setupFrameImageForLongPressItem:(id)a0;
- (void)updateLongPressItemWithCurrentX:(double)a0;
- (void)longPressDetectEdge:(id)a0 onView:(id)a1 increment:(double)a2;
- (void)invalidateLongPressCADisplayLink;
- (void)trackEventAdjustOrder;
- (double)longPressRightEdgeThreshold;
- (void)setupLongPressCADisplayLink;
- (void)pauseLongPressCADisplayLink;
- (double)longPressLeftEdgeThreshold;
- (void)handleLongPressEdgeIntersection;
- (id)lastNotLongPressingView;
- (id)firstNotLongPressingView;
- (void)addLongPressGestureTo:(id)a0;
- (void)longPressAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)resetData;

@end
