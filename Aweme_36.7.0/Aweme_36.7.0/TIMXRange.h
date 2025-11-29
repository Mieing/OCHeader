@interface TIMXRange : NSObject

@property (nonatomic) unsigned long long left;
@property (nonatomic) unsigned long long right;

+ (id)rangeWithLeft:(unsigned long long)a0 right:(unsigned long long)a1;

- (id)initWithLeft:(unsigned long long)a0 right:(unsigned long long)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
