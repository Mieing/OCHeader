@interface TPVCodecCapabilityForSet : NSObject

@property (nonatomic) long long upperboundWidth;
@property (nonatomic) long long upperboundHeight;
@property (nonatomic) long long lowerboundWidth;
@property (nonatomic) long long lowerboundHeight;
@property (nonatomic) long long profile;
@property (nonatomic) long long level;

- (id)initWithUpperBoundWidth:(long long)a0 upperboundHeight:(long long)a1 lowerboundWidth:(long long)a2 lowerboundHeight:(long long)a3 profile:(long long)a4 level:(long long)a5;

@end
