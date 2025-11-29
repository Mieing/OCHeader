@class NSMutableSet;

@interface FlutterClippingMaskViewPool : NSObject

@property (nonatomic) unsigned long long capacity;
@property (retain, nonatomic) NSMutableSet *pool;

- (id)initWithCapacity:(long long)a0;
- (id)getMaskViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertViewToPoolIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
