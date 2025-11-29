@class NSMutableArray, NSRecursiveLock;

@interface PIAAutoReleasableObject : NSObject <NSCopying>

@property (nonatomic) id weakObj;
@property (retain, nonatomic) id strongObj;
@property (nonatomic) unsigned long long objectHash;
@property (nonatomic) unsigned long long option;
@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) NSMutableArray *blockArray;

- (id)initWithObject:(id)a0 option:(unsigned long long)a1;
- (void)addOriginObjectDeallocBlocks:(id)a0;
- (void)storeObject:(id)a0 option:(unsigned long long)a1;
- (void)executeAllDeallocBlocks;
- (void)addOriginObjectDeallocBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)object;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
