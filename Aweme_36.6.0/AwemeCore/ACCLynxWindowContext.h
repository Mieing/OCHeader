@class NSPointerArray, NSMapTable;

@interface ACCLynxWindowContext : NSObject

@property (retain, nonatomic) NSPointerArray *windowStack;
@property (retain, nonatomic) NSPointerArray *lynxStack;
@property (retain, nonatomic) NSMapTable *dismissActionMap;

+ (id)sharedInstance;

- (void)push:(id)a0 to:(id)a1;
- (void)showViewController:(id)a0 dismissAction:(id /* block */)a1;
- (id)last:(id)a0;
- (void)addContianer:(id)a0;
- (void)showViewController:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showViewController:(id)a0;
- (id)init;

@end
