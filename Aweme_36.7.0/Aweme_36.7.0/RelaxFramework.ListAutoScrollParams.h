@interface RelaxFramework.ListAutoScrollParams : NSObject

@property (nonatomic) BOOL start;
@property (nonatomic) double rate;
@property (nonatomic) BOOL autoStop;

- (id)initWithStart:(BOOL)a0 rate:(double)a1 autoStop:(BOOL)a2;
- (id)init;

@end
