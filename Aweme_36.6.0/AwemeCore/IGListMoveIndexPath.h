@class NSIndexPath;

@interface IGListMoveIndexPath : NSObject

@property (readonly, nonatomic) NSIndexPath *from;
@property (readonly, nonatomic) NSIndexPath *to;

- (id)initWithFrom:(id)a0 to:(id)a1;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
