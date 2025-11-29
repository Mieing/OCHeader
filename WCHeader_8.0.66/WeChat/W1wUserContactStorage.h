@class NSCache, WCTDatabase, WCTTable;

@interface W1wUserContactStorage : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *contactTable;

+ (id)dbPathForUserDocumentPath:(id)a0;

- (id)initDBWithUserDocumentPath:(id)a0;
- (void)setupDBWithPath:(id)a0;
- (void)setupTable;
- (id)getContact:(id)a0;
- (void)deleteContact:(id)a0;
- (void)addBasicContact:(id)a0;
- (void)addContact:(id)a0;
- (void).cxx_destruct;

@end
