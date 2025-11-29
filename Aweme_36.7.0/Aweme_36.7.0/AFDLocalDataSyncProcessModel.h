@class NSArray, AFDLocalDataCenterTable;

@interface AFDLocalDataSyncProcessModel : NSObject

@property (retain, nonatomic) AFDLocalDataCenterTable *table;
@property (copy, nonatomic) NSArray *updateModels;
@property (copy, nonatomic) NSArray *deletePrimaryIDs;

- (void).cxx_destruct;

@end
