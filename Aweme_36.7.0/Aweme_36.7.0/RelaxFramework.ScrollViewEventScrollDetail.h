@interface RelaxFramework.ScrollViewEventScrollDetail : NSObject

@property (nonatomic) double deltaX;
@property (nonatomic) double deltaY;
@property (nonatomic) double scrollLeft;
@property (nonatomic) double scrollTop;
@property (nonatomic) double scrollHeight;
@property (nonatomic) double scrollWidth;

- (id)initWithDeltaX:(double)a0 deltaY:(double)a1 scrollLeft:(double)a2 scrollTop:(double)a3 scrollHeight:(double)a4 scrollWidth:(double)a5;
- (id)init;

@end
