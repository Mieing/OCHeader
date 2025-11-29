@class NSArray;

@interface AFDLocalDataCenterDatabaseContext : NSObject

@property (nonatomic) BOOL needDeleteDatabase;
@property (copy, nonatomic) NSArray *needDeleteTables;
@property (copy, nonatomic) id /* block */ preparedCompletion;
@property (copy, nonatomic) NSArray *syncedTables;
@property (nonatomic) BOOL hasInit;

- (void).cxx_destruct;

@end
