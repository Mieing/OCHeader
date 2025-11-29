@class NSMutableDictionary;

@interface Downloader : NSObject {
    struct IODLProvider { void /* function */ **x0; } *m_pODLProvider;
    struct CODLListenerImpl { void /* function */ **x0; id x1; id x2; } *m_pODLListenerImpl;
    int m_iRefCount;
    NSMutableDictionary *m_dStartParam;
}

- (id)getStringValue:(id)a0;
- (int)deleteTask:(id)a0;
- (int)setStringValue:(id)a0 paramValue:(id)a1;
- (int)initDownloader:(id)a0 downloaderListener:(id)a1;
- (int)destroyDownloader;
- (id)createTask:(id)a0 fileUniqId:(id)a1 fileName:(id)a2 newTask:(int *)a3;
- (id)getAllCompleteFiles;
- (id)resumeAllUnfinishedTasks;
- (int)deleteFile:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
