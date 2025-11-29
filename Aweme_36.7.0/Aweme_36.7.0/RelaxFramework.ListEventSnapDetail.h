@interface RelaxFramework.ListEventSnapDetail : NSObject

@property (nonatomic) int position;
@property (nonatomic) double currentScrollLeft;
@property (nonatomic) double currentScrollTop;
@property (nonatomic) double targetScrollLeft;
@property (nonatomic) double targetScrollTop;

- (id)initWithPosition:(int)a0 currentScrollLeft:(double)a1 currentScrollTop:(double)a2 targetScrollLeft:(double)a3 targetScrollTop:(double)a4;
- (id)init;

@end
