@class NSArray;

@interface MagicBrushTouchEvent : NSObject

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSArray *touches;
@property (nonatomic) long long action;
@property (nonatomic) unsigned char changed;

+ (id)fromUITouch:(id)a0 withEvent:(id)a1 andAction:(long long)a2 inView:(id)a3;

- (struct shared_ptr<magicbrush::MagicBrushTouchEvent> { struct MagicBrushTouchEvent *x0; struct __shared_weak_count *x1; })toCppTouch;
- (id)description;
- (void).cxx_destruct;

@end
