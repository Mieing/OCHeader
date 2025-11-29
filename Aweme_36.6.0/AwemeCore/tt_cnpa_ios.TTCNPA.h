@class _TtC11tt_cnpa_ios6TTCNPA;

@interface tt_cnpa_ios.TTCNPA : NSObject {
    void /* unknown type, empty encoding */ monitorBlock;
    void /* unknown type, empty encoding */ operationQueue;
    void /* unknown type, empty encoding */ isFirst;
    void /* unknown type, empty encoding */ startLock;
    void /* unknown type, empty encoding */ engineStarted;
    void /* unknown type, empty encoding */ engineStartedCondition;
    void /* unknown type, empty encoding */ ttcnpaManager;
}

@property (class, nonatomic, readonly) _TtC11tt_cnpa_ios6TTCNPA *shared;

- (void)setCnpaMonitorWithBlock:(id /* block */)a0;
- (void)startWithContentProducer:(id)a0 contentPropagator:(id)a1;
- (void)asyncReadManifestWithFilePath:(id)a0 callback:(id /* block */)a1;
- (id)syncReadManifestWithFilePath:(id)a0;
- (void)asyncReadManifestFromBytes:(id)a0 callback:(id /* block */)a1;
- (id)syncReadManifestFromBytes:(id)a0;
- (void)asyncReadManifestFromBytes:(id)a0 withExtension:(id)a1 callback:(id /* block */)a2;
- (id)syncReadManifestFromBytes:(id)a0 withExtension:(id)a1;
- (id)syncReadExifManifestWithFilePath:(id)a0;
- (id)syncReadExifManifestFromBytes:(id)a0;
- (void)asyncWriteManifestWithInputPath:(id)a0 outputPath:(id)a1 label:(id)a2 pId:(id)a3 writeAsProducer:(BOOL)a4 overwriteExist:(BOOL)a5 needSign:(BOOL)a6 callback:(id /* block */)a7;
- (id)syncWriteManifestWithInputPath:(id)a0 outputPath:(id)a1 label:(id)a2 pId:(id)a3 writeAsProducer:(BOOL)a4 overwriteExist:(BOOL)a5 needSign:(BOOL)a6;
- (void)asyncWriteManifestManuallyWithInputPath:(id)a0 outputPath:(id)a1 manifest:(id)a2 callback:(id /* block */)a3;
- (id)syncWriteManifestManuallyWithInputPath:(id)a0 outputPath:(id)a1 manifest:(id)a2;
- (void)sendMonitorWithEventType:(id)a0 errCode:(id)a1 errDesc:(id)a2 startTime:(id)a3;
- (id)sendMonitorAndRunCallbackIfNotStartedWithTime:(id)a0 eventType:(id)a1 callback:(id /* block */)a2;
- (void)sendMonitorAndRunCallbackIfSucceedWithStartTime:(id)a0 result:(id)a1 eventType:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
