@interface FlutterTextPosition : UITextPosition

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) long long affinity;

+ (id)positionWithIndex:(unsigned long long)a0;
+ (id)positionWithIndex:(unsigned long long)a0 affinity:(long long)a1;

- (id)initWithIndex:(unsigned long long)a0 affinity:(long long)a1;

@end
