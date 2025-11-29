@interface AWEHPSkylightUIConfig : NSObject <NSCopying>

@property (nonatomic) long long layoutType;
@property (nonatomic) double height;
@property (nonatomic) double overlappingHostTopHeight;

- (BOOL)isEqualConfig:(id)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
