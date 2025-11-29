@class UIView;

@interface BDASplashButtonTouchModel : NSObject

@property (nonatomic) BOOL enableSensitivity;
@property (nonatomic) double timeLimit;
@property (nonatomic) double slideDistance;
@property (nonatomic) double trackSlideDistance;
@property (nonatomic) BOOL touchBeganValid;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } currentPoint;
@property (nonatomic) double realSlideTrackDistance;
@property (nonatomic) double startTime;
@property (weak, nonatomic) UIView *targetView;
@property (copy, nonatomic) id /* block */ touchValidBlock;
@property (copy, nonatomic) id /* block */ touchSuccessBlock;
@property (copy, nonatomic) id /* block */ touchFailBlock;

- (void)touchesBegan:(id)a0;
- (void)touchesMoved:(id)a0;
- (void)touchesEnded:(id)a0;
- (void)touchesCancelled:(id)a0;
- (id)initWithSensitivityInfo:(id)a0;
- (void)timeoutTask;
- (BOOL)touchValid:(id)a0;
- (void)cancelAndSetTimeout;
- (void)addDistanceWithTouch:(id)a0;
- (void)touchSuccess:(BOOL)a0;
- (void)touchFail;
- (BOOL)isDistanceValid;
- (void)clearTouchData;
- (void)touchRelease;
- (void).cxx_destruct;
- (void)cancelTimeout;

@end
