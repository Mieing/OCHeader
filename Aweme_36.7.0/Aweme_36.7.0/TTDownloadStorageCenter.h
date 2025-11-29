@class NSString, NSObject;
@protocol TTDownloadStorageProtocol;

@interface TTDownloadStorageCenter : NSObject <TTDownloadStorageProtocol> {
    NSObject<TTDownloadStorageProtocol> *ttDTO;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)insertOrUpdateClearCacheRule:(id)a0 error:(id *)a1;
- (BOOL)deleteClearCacheRule:(id)a0 error:(id *)a1;
- (BOOL)updateParametersTable:(id)a0 error:(id *)a1;
- (BOOL)deleteSubSliceInfo:(id)a0 error:(id *)a1;
- (BOOL)updateExtendConfigSync:(id)a0 error:(id *)a1;
- (BOOL)insertOrUpdateSubSliceInfo:(id)a0 error:(id *)a1;
- (id)initWithDownloadStorageImplType:(long long)a0;
- (BOOL)queryDownloadTaskConfigWithUrlSync:(id)a0 downloadTaskResultBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)queryAllDownloadTaskConfigSync:(id /* block */)a0 isTriggerClean:(BOOL *)a1 error:(id *)a2;
- (BOOL)queryAllDownloadTrackModelSync:(id /* block */)a0 error:(id *)a1;
- (BOOL)insertDownloadTrackModelSync:(id)a0 error:(id *)a1;
- (BOOL)insertDownloadTaskConfigSync:(id)a0 error:(id *)a1;
- (BOOL)deleteDownloadTaskConfigSync:(id)a0 error:(id *)a1;
- (BOOL)deleteDownloadTrackModelWithUrlMd5Sync:(id)a0 error:(id *)a1;
- (BOOL)updateDownloadTaskConfigSync:(id)a0 error:(id *)a1;
- (BOOL)queryDownloadTrackModelWithUrlMd5Sync:(id)a0 downloadTrackResultBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)updateSliceConfig:(id)a0 sliceConfig:(id)a1 error:(id *)a2;
- (id)getAllClearCacheRule:(id *)a0;
- (BOOL)updateDownloadTrackModelSync:(id)a0 error:(id *)a1;
- (BOOL)deleteDownloadTrackModelSync:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
