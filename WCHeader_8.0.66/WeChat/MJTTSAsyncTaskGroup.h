@class MJAudioFileManager, NSArray, NSMutableDictionary, NSString, NSMutableArray, UBDictionarySignal;

@interface MJTTSAsyncTaskGroup : NSObject

@property (retain, nonatomic) NSArray *captionItems;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } totalDuration;
@property (readonly, nonatomic) BOOL isCloneTimbre;
@property (nonatomic) long long audioSampleRate;
@property (retain, nonatomic) NSMutableDictionary *tasksByText;
@property (readonly, nonatomic) NSMutableArray *completions;
@property (readonly, nonatomic) NSString *audioID;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) MJAudioFileManager *audioFileManager;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) UBDictionarySignal *statusDidUpdateSignal;

+ (id)regulateCaptionItems:(id)a0;

- (id)initWithAudioID:(id)a0 roleID:(id)a1 isCloneTimbre:(BOOL)a2 audioFileManager:(id)a3 statusDidUpdateSignal:(id)a4;
- (void)dealloc;
- (void)setAudioSampleRateIfNeeded:(long long)a0;
- (void)startWithCaptionItems:(id)a0 totalDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void)handleResponseDatas:(id)a0;
- (void)cancel;
- (BOOL)appendCompletionIfRunning:(id)a0;
- (void)markStatusPending;
- (long long)runningTaskCount;
- (void)handleTaskStart;
- (void)handleTaskSuccessWithSpeechFilePath:(id)a0;
- (void)handleTaskFailWithError:(id)a0;
- (id)statusDidUpdateParams;
- (BOOL)containsInvalidTaskID;
- (id)description;
- (void).cxx_destruct;

@end
