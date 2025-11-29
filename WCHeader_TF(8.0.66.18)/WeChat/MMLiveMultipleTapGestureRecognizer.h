@class NSMutableDictionary;

@interface MMLiveMultipleTapGestureRecognizer : UIGestureRecognizer

@property (nonatomic) unsigned long long clickCount;
@property BOOL recordingTouch;
@property (retain, nonatomic) NSMutableDictionary *touchInitialLocations;
@property (nonatomic) unsigned long long maxClickCount;
@property (nonatomic) double clickTimeoutInterval;
@property (nonatomic) double clickCountResetTimeoutInterval;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)tryFinishRecognize;
- (void)cancelFinishRecognize;
- (void)innerFinishRecognize;
- (void)resetClickCount;
- (void).cxx_destruct;

@end
