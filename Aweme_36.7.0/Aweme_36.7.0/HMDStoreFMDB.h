@class HMDBGDB, NSString;

@interface HMDStoreFMDB : NSObject <HMDStoreIMP>

@property (retain, nonatomic) HMDBGDB *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)insertObject:(id)a0 into:(id)a1;
- (BOOL)insertObjects:(id)a0 into:(id)a1;
- (BOOL)deleteAllObjectsFromTable:(id)a0;
- (BOOL)deleteObjectsFromTable:(id)a0 andConditions:(id)a1 orConditions:(id)a2;
- (id)getObjectsWithTableName:(id)a0 class:(Class)a1 andConditions:(id)a2 orConditions:(id)a3 limit:(long long)a4;
- (BOOL)isTableExistsForName:(id)a0;
- (void)executeCheckpoint;
- (BOOL)deleteObjectsFromTable:(id)a0 limitToMaxSize:(long long)a1;
- (void)immediatelyActiveVacuum;
- (long long)recordCountForTable:(id)a0;
- (unsigned long long)dbFileSize;
- (id)getObjectsWithTableName:(id)a0 class:(Class)a1 andConditions:(id)a2 orConditions:(id)a3;
- (BOOL)deleteObjectsFromTable:(id)a0 andConditions:(id)a1 orConditions:(id)a2 limit:(long long)a3;
- (id)getObjectsWithTableName:(id)a0 class:(Class)a1 andConditions:(id)a2 orConditions:(id)a3 orderingProperty:(id)a4 orderingType:(long long)a5;
- (BOOL)updateRowsInTable:(id)a0 onProperty:(id)a1 propertyValue:(id)a2 withObject:(id)a3 andConditions:(id)a4 orConditions:(id)a5;
- (BOOL)updateRowsInTable:(id)a0 properties:(id)a1 withObject:(id)a2 andConditions:(id)a3 orConditions:(id)a4;
- (id)getAllObjectsWithTableName:(id)a0 class:(Class)a1;
- (BOOL)createTable:(id)a0 withClass:(Class)a1;
- (id)getOneObjectWithTableName:(id)a0 class:(Class)a1 andConditions:(id)a2 orConditions:(id)a3;
- (BOOL)updateRowsInTable:(id)a0 checkIvarChange:(BOOL)a1 onProperty:(id)a2 propertyValue:(id)a3 withObject:(id)a4 andConditions:(id)a5 orConditions:(id)a6;
- (BOOL)updateRowsInTable:(id)a0 onProperty:(id)a1 propertyValue:(id)a2 withObject:(id)a3 andConditions:(id)a4 orConditions:(id)a5 limit:(long long)a6;
- (long long)recordCountForTable:(id)a0 andConditions:(id)a1 orConditions:(id)a2;
- (id)initWithPath:(id)a0;
- (void)closeDB;
- (void).cxx_destruct;
- (BOOL)dropTable:(id)a0;
- (void)inTransaction:(id /* block */)a0;
- (id)rootPath;
- (void)vacuumIfNeeded;
- (long long)deleteErrorCode;

@end
