@interface IESMMFrameTimeRange : NSObject

@property (nonatomic) double minFrameRate;
@property (nonatomic) double maxFrameRate;

- (id)initWithMinFrameRate:(double)a0 maxFrameRate:(double)a1;

@end
