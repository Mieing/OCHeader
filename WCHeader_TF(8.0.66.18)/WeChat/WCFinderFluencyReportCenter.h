@class NSMutableDictionary;

@interface WCFinderFluencyReportCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *sceneDict;
@property (retain, nonatomic) NSMutableDictionary *sceneReportBlockDict;

- (void)setReportBlock:(id /* block */)a0 withSceneKey:(id)a1;
- (void)addPhaseItem:(id)a0 withPhaseKey:(id)a1 andSceneKey:(id)a2;
- (void)removeAllWithSceneKey:(id)a0;
- (void)removePhaseItemWithPhaseKey:(id)a0 andSceneKey:(id)a1;
- (id)phaseItemWithPhaseKey:(id)a0 andSceneKey:(id)a1;
- (void)reportWithSceneKey:(id)a0;
- (void).cxx_destruct;

@end
