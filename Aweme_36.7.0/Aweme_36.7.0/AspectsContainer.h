@class NSArray;

@interface AspectsContainer : NSObject

@property (copy) NSArray *beforeAspects;
@property (copy) NSArray *insteadAspects;
@property (copy) NSArray *afterAspects;

- (BOOL)hasAspects;
- (void)addAspect:(id)a0 withOptions:(unsigned long long)a1;
- (BOOL)removeAspect:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
