@interface MMTouchEvent : NSObject

@property (readonly, nonatomic) float x;
@property (readonly, nonatomic) float y;
@property (readonly, nonatomic) long long event;

+ (id)TouchEventWithX:(float)a0 y:(float)a1 event:(long long)a2;

- (id)initWithX:(float)a0 y:(float)a1 event:(long long)a2;
- (id)description;

@end
