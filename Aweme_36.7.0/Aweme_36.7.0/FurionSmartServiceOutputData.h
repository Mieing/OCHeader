@interface FurionSmartServiceOutputData : FurionSmartEngineOutputData

@property (nonatomic) float threshold;

+ (id)serviceOutputFromEngineOutput:(id)a0;

- (id)subGroupTaskOutputDatasFromGroup:(id)a0;
- (id)subTaskOutputDataFromTaskName:(id)a0;
- (id)subGroupTaskOutputDataFromGroup:(id)a0 target:(id)a1;
- (id)init;

@end
