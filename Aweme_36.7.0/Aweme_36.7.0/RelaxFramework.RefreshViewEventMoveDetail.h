@interface RelaxFramework.RefreshViewEventMoveDetail : NSObject

@property (nonatomic) BOOL isDragging;
@property (nonatomic) double offsetPercent;

- (id)initWithIsDragging:(BOOL)a0 offsetPercent:(double)a1;
- (id)init;

@end
