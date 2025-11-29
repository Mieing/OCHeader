@class NSMutableArray;

@interface AWEEcomSearchChunkRelationManager : NSObject

@property (retain, nonatomic) NSMutableArray *rules;

- (void)addRelationRule:(id)a0;
- (BOOL)shouldIgnoreChunk:(id)a0 storage:(id)a1;
- (id)checkChunkDependenciesSatisfied:(id)a0 storage:(id)a1;
- (BOOL)shouldIgnoreSourceType:(unsigned long long)a0 withTargetType:(unsigned long long)a1;
- (id)dependencyTypesForSourceChunkType:(unsigned long long)a0;
- (BOOL)checkRelationWithSourceChunkType:(unsigned long long)a0 targetType:(unsigned long long)a1 relationType:(unsigned long long)a2;
- (id)rulesForRelationType:(unsigned long long)a0;
- (BOOL)isDependencySourceType:(unsigned long long)a0 withTargetType:(unsigned long long)a1;
- (BOOL)shouldMergeSourceType:(unsigned long long)a0 withTargetType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
