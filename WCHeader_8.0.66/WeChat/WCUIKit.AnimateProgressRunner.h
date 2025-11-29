@interface WCUIKit.AnimateProgressRunner : NSObject {
    void /* unknown type, empty encoding */ complete;
    void /* unknown type, empty encoding */ updateProgress;
    void /* unknown type, empty encoding */ timePassed;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ isReversed;
    void /* unknown type, empty encoding */ displayLink;
}

@property (nonatomic, copy) id /* block */ complete;
@property (nonatomic, copy) id /* block */ updateProgress;

- (void)displayUpdate:(id)a0;
- (void)startWithTimePassed:(double)a0 totalTime:(double)a1 reverse:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;

@end
