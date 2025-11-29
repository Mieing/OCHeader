@class WCTDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMGroupParticipantTagDataBase : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (retain, nonatomic) WCTDatabase *database;

+ (id)p_dbFilePath;

- (id)tagConfigDataWithCid:(id)a0;
- (void)tagInfoDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void)tagConfigDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void)tagConfigDataWithCid:(id)a0 tagKey:(id)a1 completion:(id /* block */)a2;
- (void)participantTagDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void)participantTagDataWithCid:(id)a0 secUid:(id)a1 completion:(id /* block */)a2;
- (void)updateTagConfigDataWith:(id)a0 tagConfigData:(id)a1 completion:(id /* block */)a2;
- (id)participantTagDataWithCid:(id)a0 secUid:(id)a1;
- (id)participantTagDataWithCid:(id)a0;
- (void)refreshDataWith:(id)a0 tagInfoData:(id)a1 tagConfigData:(id)a2 tagParticipantData:(id)a3 completion:(id /* block */)a4;
- (void)p_prepare;
- (BOOL)p_createTableWithDatabase:(id)a0;
- (void)deleteTagConfigDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void)deleteTagInfoDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void)deleteParticipantTagDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)saveObjects:(id)a0 completion:(id /* block */)a1;

@end
