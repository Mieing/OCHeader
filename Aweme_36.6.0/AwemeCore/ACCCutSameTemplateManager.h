@class NSPointerArray, NSMutableDictionary, NSString;

@interface ACCCutSameTemplateManager : NSObject <LVTemplateProcessorDelegate, ACCDraftMessage>

@property (retain, nonatomic) NSPointerArray *allDelegates;
@property (retain, nonatomic) NSMutableDictionary *downloadingProgress;
@property (retain, nonatomic) NSMutableDictionary *processorSet;
@property (retain, nonatomic) NSMutableDictionary *templateSet;
@property (nonatomic) long long downloadStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)draftHasTransitionedNormalByUserWithDraftId:(id)a0 launchFrom:(unsigned long long)a1 extraInfo:(id)a2;
- (void)removeDelegatePointer:(const void *)a0;
- (void)callbackDidFinishDownloadTemplateModel:(id)a0 filePath:(id)a1;
- (void)callbackDidStartDownloadTemplateModel:(id)a0;
- (void)callbackDidDownloadAndProcessTemplateModel:(id)a0 progress:(double)a1;
- (void)callbackDidFailTemplateModel:(id)a0 withError:(id)a1;
- (void)clearDavinciEffectCache;
- (void)callbackDidFinishedProcessTemplateModel:(id)a0 dataManager:(id)a1 withError:(id)a2;
- (void)callbackDidPrepareResourceTemplateModel:(id)a0 dataManager:(id)a1;
- (void)templateProcessor:(id)a0 didChangeProgress:(double)a1;
- (void)templateProcessor:(id)a0 didPrepareResource:(id)a1;
- (void)templateProcessor:(id)a0 didFailWithErrorCode:(unsigned long long)a1 withSubCode:(id)a2;
- (void)templateProcessor:(id)a0 didCompleteWithDataManager:(id)a1;
- (id)downloadTemplateFromModel:(id)a0;
- (void)cancelDownloadAndProcessTemplateFromModel:(id)a0;
- (void)clearAllTemplateCache;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
