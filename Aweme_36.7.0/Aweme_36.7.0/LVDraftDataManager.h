@class LVMediaDraft, NSFileManager, NSOperationQueue, LVDataBridge, NSObject;
@protocol OS_dispatch_semaphore;

@interface LVDraftDataManager : NSObject {
    NSOperationQueue *_queue;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) LVDataBridge *bridge;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) LVMediaDraft *draft;

+ (id)sharedManager;

- (id)restoreNLETemplateModelFromJsonPath:(id)a0 error:(id *)a1;
- (id)syncReadFromPath:(id)a0 error:(id *)a1;
- (BOOL)syncWrite:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)syncCopyFromSource:(id)a0 toDestination:(id)a1 error:(id *)a2;
- (id)getDraftJsonFrom:(id)a0;
- (BOOL)syncWriteDraftJson:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)syncReadFromJson:(id)a0 error:(id *)a1;
- (void)asyncWrite:(id)a0 toPath:(id)a1 completion:(id /* block */)a2;
- (void)asyncReadFromPath:(id)a0 completion:(id /* block */)a1;
- (void)asyncCopyFromSource:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
