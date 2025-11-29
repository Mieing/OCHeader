@interface YYTextPosition : UITextPosition <NSCopying>

@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) long long affinity;

+ (id)positionWithOffset:(long long)a0 affinity:(long long)a1;
+ (id)positionWithOffset:(long long)a0;

- (long long)compare:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
