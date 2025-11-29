@class WCTDatabase, NSMutableDictionary, NSString;

@interface GameCenterCommonDb : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *dataBase;
@property (retain, nonatomic) NSMutableDictionary *tableDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)deleteChatRoomDB;
- (void)dealloc;
- (void)setupDbBase;
- (id)getDbPath;
- (id)getTableOfObjectClass:(Class)a0;
- (id)getTableOfObjectClass:(Class)a0 customPrefix:(id)a1;
- (id)createTableWithTableName:(id)a0 objectClass:(Class)a1;
- (BOOL)runTransaction:(id /* block */)a0;
- (void).cxx_destruct;

@end
