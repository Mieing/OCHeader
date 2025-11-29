@class NSString, UIScrollView, UIView, UIPanGestureRecognizer;
@protocol FullScreenGestureDelegate;

@interface WXFullScreenGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    struct CGPoint { double x; double y; } _panGestureBeginPoint;
    BOOL _shouldCloseWhenGestureEnd;
    unsigned long long _panGestureLastTimeStamp;
    struct CGPoint { double x; double y; } _panGestureLastPosition;
    double _panGestureAnimationDuration;
    BOOL _hasBeginDrag;
    BOOL _shouldIgnoreDrag;
    struct CGPoint { double x; double y; } _originPagingContentOffset;
    struct CGPoint { double x; double y; } _originInnerContentOffset;
    UIScrollView *_pagingScrollView;
    UIScrollView *_innerScrollView;
    UIView *_parentView;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

@property (nonatomic) struct CGPoint { double x; double y; } touchBeginPoint;
@property (nonatomic) BOOL isLongPressHandled;
@property (weak, nonatomic) id<FullScreenGestureDelegate> m_delegate;
@property (nonatomic) BOOL enableDragDownToClose;
@property (nonatomic) BOOL enableLeftToRight;
@property (nonatomic) BOOL enableRightToLeft;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (id)panGestureRecognizer;
- (void)resetWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initGestures;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)LongPressBegin;
- (void)LongPressEvents;
- (void)pressedEvents;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)cancelPressEvents;
- (double)distanceBetweenPointA:(struct CGPoint { double x0; double x1; })a0 pointB:(struct CGPoint { double x0; double x1; })a1;
- (double)durationFromCurPositionToTargetPointWithSpeed:(double)a0 dist:(double)a1;
- (BOOL)shouldCloseWhenGestureEndWithTranslation:(struct CGPoint { double x0; double x1; })a0 horizontalDetectFail:(BOOL)a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (void)onDragging:(id)a0;
- (void)handleDraggingChanged:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
