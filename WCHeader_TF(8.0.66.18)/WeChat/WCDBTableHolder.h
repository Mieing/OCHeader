@class WCTDatabase, NSString, WCTTable;

@interface WCDBTableHolder : NSObject

@property (readonly, nonatomic) WCTDatabase *database;
@property (readonly, nonatomic) WCTTable *table;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int dbTag;

- (id)initWithPath:(id)a0 tableName:(id)a1 tableClass:(Class)a2;
- (BOOL)createWithError:(id *)a0;
- (void).cxx_destruct;

@end
