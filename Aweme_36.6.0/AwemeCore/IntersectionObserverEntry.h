@class NSString;

@interface IntersectionObserverEntry : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } relativeRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingClientRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } intersectionRect;
@property (nonatomic) float intersectionRatio;
@property (nonatomic) BOOL isIntersecting;
@property (nonatomic) double time;
@property (nonatomic) NSString *relativeToId;

- (id)rectToDictionary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)toDictionary;
- (void)update;

@end
