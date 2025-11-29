@protocol VoIPMPUIv2TouchAlgorithmDelegate;

@interface VoIPMPUIv2TouchAlgorithm : MMObject

@property (weak, nonatomic) id<VoIPMPUIv2TouchAlgorithmDelegate> m_delegate;
@property (nonatomic) BOOL m_hasStart;
@property (nonatomic) struct CGPoint { double x; double y; } m_maxMoveDistance;
@property (nonatomic) struct CGPoint { double x; double y; } m_lastPosition;
@property (nonatomic) BOOL hasMoveLong;
@property (nonatomic) unsigned long long foldType;
@property (nonatomic) double initialDistance;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beganToScaleFrame;
@property (nonatomic) struct CGSize { double width; double height; } willFoldSize;
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
@property (nonatomic) double foldPositionRemainingWidth;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (nonatomic) double maxScale;
@property (nonatomic) double minScale;
@property (nonatomic) double minWhenFoldScale;
@property (nonatomic) BOOL shouldScaleMinWhenFold;
@property (nonatomic) BOOL isScaling;

+ (double)distanceBetweenPoint:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1;

- (id)init;
- (void)setVoIPMPUIv2TouchAlgorithmDelegate:(id)a0;
- (void)setupScaleVars:(id)a0;
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
