@interface WCFinderShortTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) BOOL constantTapping;
@property (nonatomic) BOOL constantTapped;
@property (nonatomic) unsigned long long firstTapTimestamp;
@property (nonatomic) double maxDelay;
@property (nonatomic) double minDoubleTapInterval;
@property (nonatomic) BOOL supportConstantTapping;

- (id)init;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)cancelTappingAfterDelay;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;

@end
