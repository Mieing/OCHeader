@class UIViewController, NSMutableArray;

@interface AWEPerfLoadFMP : AWEPerfLoadObject {
    UIViewController *containerVC;
    NSMutableArray *_requests;
    BOOL _didStart;
}

+ (double)timeThreshold;

- (void)addRequestObserver;
- (void)startWithTimeThreshold:(double)a0;
- (void)addObserverWithRequest:(id)a0;
- (void)manualStart;
- (void)manualStartWithTimeThreshold:(double)a0;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)start;

@end
