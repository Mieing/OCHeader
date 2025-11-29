@class MJAudioFileManager, NSString, NSMutableArray, UBDictionarySignal;

@interface MJVocalEnhancementAsyncTask : NSObject

@property (readonly, nonatomic) NSMutableArray *completions;
@property (nonatomic) BOOL isCanceled;
@property (retain, nonatomic) NSString *processedFilePath;
@property (readonly, nonatomic) NSString *audioID;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) MJAudioFileManager *audioFileManager;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) UBDictionarySignal *statusDidUpdateSignal;

- (id)initWithAudioID:(id)a0 roleID:(id)a1 audioFileManager:(id)a2 statusDidUpdateSignal:(id)a3;
- (void)dealloc;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void)handleTaskStart;
- (void)handleTaskSuccessWithProcessedFilePath:(id)a0;
- (void)handleTaskFailWithError:(id)a0;
- (BOOL)appendCompletionIfRunning:(id)a0;
- (void)markStatusPending;
- (id)statusDidUpdateParams;
- (id)description;
- (void).cxx_destruct;

@end
