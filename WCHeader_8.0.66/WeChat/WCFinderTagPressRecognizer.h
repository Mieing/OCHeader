@interface WCFinderTagPressRecognizer : UILongPressGestureRecognizer

@property (nonatomic) unsigned long long hashValue;
@property (copy, nonatomic) id /* block */ action;

+ (id)gestureWithAction:(id /* block */)a0 hash:(unsigned long long)a1;

- (void)replaceBlock:(id /* block */)a0;
- (void)onPress:(id)a0;
- (void).cxx_destruct;

@end
