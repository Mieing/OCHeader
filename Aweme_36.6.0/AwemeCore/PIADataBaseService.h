@class FMDatabaseQueue, NSString;

@interface PIADataBaseService : NSObject <PIADataBaseService>

@property (retain, nonatomic) FMDatabaseQueue *dbQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)executeIntransaction:(id /* block */)a0;
- (BOOL)executeCreate:(id)a0 values:(id)a1 inTransaction:(BOOL)a2 error:(id *)a3;
- (BOOL)executeReplace:(id)a0 values:(id)a1 inTransaction:(BOOL)a2 error:(id *)a3;
- (void)executeQuery:(id)a0 values:(id)a1 error:(id *)a2 inTransaction:(BOOL)a3 completion:(id /* block */)a4;
- (BOOL)executeDelete:(id)a0 values:(id)a1 inTransaction:(BOOL)a2 error:(id *)a3;
- (BOOL)_executeUpdate:(id)a0 value:(id)a1 inTrancation:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
