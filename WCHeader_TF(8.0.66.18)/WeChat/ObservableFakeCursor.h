@class NSString;

@interface ObservableFakeCursor : UIView

@property (readonly, weak, nonatomic) id observeTarget;
@property (readonly, weak, nonatomic) id observeObject;
@property (readonly, nonatomic) NSString *keyPath;

- (void)dealloc;
- (void)registerObserverTarget:(id)a0 object:(id)a1 keyPath:(id)a2;
- (void).cxx_destruct;

@end
