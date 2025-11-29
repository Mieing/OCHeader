@interface AWEIMSwipeTarget : NSObject

@property (nonatomic) long long targetType;
@property (nonatomic) double value;

- (double)offsetForView:(id)a0 minimumOverscroll:(double)a1;

@end
