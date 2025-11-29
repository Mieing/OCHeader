@interface Character : NSObject <NSCopying>

@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) long long start;
@property (nonatomic) long long end;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
