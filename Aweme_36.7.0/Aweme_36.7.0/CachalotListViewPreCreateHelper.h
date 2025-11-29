@class CachalotMainLoopIdleTaskManager, NSMutableArray, NSMapTable;
@protocol CachalotListViewPreCreateHelperDelegate;

@interface CachalotListViewPreCreateHelper : NSObject

@property (retain, nonatomic) NSMutableArray *preCreateConfigCache;
@property (retain, nonatomic) NSMapTable *preCreateCacheTable;
@property (retain, nonatomic) NSMapTable *preCreateTaskIdentifierTable;
@property (retain, nonatomic) CachalotMainLoopIdleTaskManager *taskManager;
@property (copy, nonatomic) id /* block */ preCreateBlock;
@property (copy, nonatomic) id /* block */ identifierBlock;
@property (weak, nonatomic) id<CachalotListViewPreCreateHelperDelegate> delegate;

- (id)p_preCreateComponentWithModel:(id)a0;
- (id)p_getPreCreateIdentifierWithModel:(id)a0;
- (id)initWithTaskManager:(id)a0;
- (void)configPreCreateWithModels:(id)a0;
- (void)clearPreCreateConfigs;
- (void)clearPreCreateCache;
- (void)triggerPreCreateImmediately;
- (void)scheduleSpareTimePreCreate;
- (void)cancelSpareTimePreCreate;
- (id)fetchComponentWithModel:(id)a0;
- (BOOL)checkComponentExistenceWithModel:(id)a0;
- (void).cxx_destruct;

@end
