@protocol MoveWithTouchAlgorithmDelegate;

@interface MoveWithTouchAlgorithm : MMObject

@property (weak, nonatomic) id<MoveWithTouchAlgorithmDelegate> m_delegate;
@property (nonatomic) BOOL m_hasStart;
@property (nonatomic) struct CGPoint { double x; double y; } m_maxMoveDistance;
@property (nonatomic) struct CGPoint { double x; double y; } m_lastPosition;
@property (nonatomic) long long m_startOrientation;
@property (nonatomic) BOOL hasMoveLong;
@property (nonatomic) double edgeOffsetX;
@property (nonatomic) double edgeOffsetTop;
@property (nonatomic) double edgeOffsetBottom;
@property (nonatomic) double longMoveMinDelta;
@property (nonatomic) BOOL canMoveOutside;
@property (nonatomic) struct optional<CGRect> { union { char __null_state_; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } __val_; } ; BOOL __engaged_; } area;
@property (nonatomic) struct CGPoint { double x; double y; } m_startPoint;
@property (nonatomic) BOOL allowAdsorbToWindow;
@property (nonatomic) struct CGPoint { double x; double y; } m_startPosition;
@property (nonatomic) BOOL m_hasMoved;

- (id)init;
- (void)setMoveWithTouchAlgorithmDelegate:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)startCalculate;
- (void)stopCalculate;
- (void)calculateMaxDistance;
- (void)adsorbToWindow;
- (BOOL)tryFoldToWindowBorder;
- (void)doFoldToBorder;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
