@class WCTDatabase, WCTTable;

@interface MMLocationPoiDetailDB : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *table;

- (id)init;
- (void)setupDatabase;
- (id)pathForDatabase;
- (void)closeDB;
- (id)getPoiDetail:(id)a0;
- (BOOL)insertOrReplace:(id)a0;
- (void)clearData;
- (void).cxx_destruct;

@end
