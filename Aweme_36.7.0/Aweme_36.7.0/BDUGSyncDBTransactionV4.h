@class BDUGSyncDBBusinessV4;

@interface BDUGSyncDBTransactionV4 : NSObject

@property (retain, nonatomic) BDUGSyncDBBusinessV4 *dbBase;
@property (readonly, nonatomic) BOOL isInTransaction;

- (id)initWithDBBase:(id)a0;
- (void).cxx_destruct;
- (BOOL)beginTransaction;
- (BOOL)rollback;
- (BOOL)commit;

@end
