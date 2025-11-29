@interface DVEAudioPoint : NSObject

@property (nonatomic) double point;
@property (nonatomic) double x;
@property (nonatomic) double speed;

- (id)initWithX:(double)a0 point:(double)a1 speed:(double)a2;
- (id)description;

@end
