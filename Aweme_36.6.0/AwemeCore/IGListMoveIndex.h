@interface IGListMoveIndex : NSObject

@property (readonly, nonatomic) long long from;
@property (readonly, nonatomic) long long to;

- (id)initWithFrom:(long long)a0 to:(long long)a1;
- (long long)compare:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
