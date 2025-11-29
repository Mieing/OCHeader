@class WCTDatabase, NSString, WCTTable;

@interface WCDurationLogDB : MMObject

@property (retain, nonatomic) WCTDatabase *dataBase;
@property (retain, nonatomic) WCTTable *table;
@property (readonly, nonatomic) NSString *filePath;

- (BOOL)insertItem:(id)a0;
- (id)getAllItems;
- (BOOL)deleteAllItems;
- (void)close;
- (void).cxx_destruct;

@end
