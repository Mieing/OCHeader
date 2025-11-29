@interface IESLiveScreenOrientationObserver : NSObject

@property (copy, nonatomic) id /* block */ changeBlock;
@property (nonatomic) long long currentOrientation;

+ (id)sharedInstance;

- (void)startObservingWithChangeBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopObserving;
- (void)dealloc;
- (void)orientationDidChange:(id)a0;

@end
