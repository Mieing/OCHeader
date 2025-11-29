@class NSString;

@interface WCCCOService : MMRootService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)RLECompressWithIndexes:(id)a0;
+ (id)totalClassHashIndexMapWithVersion:(unsigned int *)a0;
+ (id)classNameIndexMapWithClassNames:(id)a0 fromTotalClassHashIndexMap:(id)a1;

- (void)onServiceEnterBackground;

@end
