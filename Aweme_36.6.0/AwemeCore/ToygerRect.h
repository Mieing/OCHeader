@interface ToygerRect : ToygerBaseModel

@property (nonatomic) long long left;
@property (nonatomic) long long top;
@property (nonatomic) long long right;
@property (nonatomic) long long bottom;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
