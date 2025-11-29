@interface VEComposerPreloadContextParam : NSObject

@property (nonatomic) unsigned long long availableMemory;
@property (nonatomic) unsigned long long memoryCapacity;
@property (nonatomic) unsigned long long nodesType;

- (id)initWithAvailableMemory:(unsigned long long)a0 memoryCapacity:(unsigned long long)a1;
- (id)description;

@end
