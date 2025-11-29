@class BDUGSyncDBBusiness;

@interface BDUGSyncDBTransaction : NSObject

@property (retain, nonatomic) BDUGSyncDBBusiness *dbBase;
@property (readonly, nonatomic) BOOL isInTransaction;

- (id)initWithDBBase:(id)a0;
- (void).cxx_destruct;
- (BOOL)beginTransaction;
- (BOOL)rollback;
- (BOOL)commit;

@end
