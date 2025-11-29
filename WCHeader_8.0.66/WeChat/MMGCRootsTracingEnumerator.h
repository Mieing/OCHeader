@class MMGCRootsTracingGraphElement, NSSet, NSEnumerator;

@interface MMGCRootsTracingEnumerator : NSEnumerator {
    NSSet *_retainedObjectsSnapshot;
    NSEnumerator *_enumerator;
}

@property (readonly, nonatomic) MMGCRootsTracingGraphElement *object;

- (id)initWithObject:(id)a0;
- (id)nextObject;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
