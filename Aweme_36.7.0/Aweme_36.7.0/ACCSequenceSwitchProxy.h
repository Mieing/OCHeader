@class NSArray, NSMutableArray;

@interface ACCSequenceSwitchProxy : NSProxy

@property (retain, nonatomic) NSMutableArray *ssp_internalInstances;
@property (nonatomic) long long ssp_index;
@property (readonly, copy, nonatomic) NSArray *ssp_instances;

- (void)ssp_clearInstances;
- (void)ssp_moveInstanceFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)ssp_switchToIndex:(long long)a0;
- (void)ssp_removeInstanceAtIndexs:(id)a0;
- (id)ssp_objectAtIndex:(unsigned long long)a0;
- (void)ssp_addInstance:(id)a0 atIndex:(long long)a1;
- (void)ssp_replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)initWithInstances:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
