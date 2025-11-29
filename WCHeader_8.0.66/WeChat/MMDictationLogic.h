@class NSString, NSData, NSHashTable, NSMutableArray, MMDictationTask;

@interface MMDictationLogic : NSObject <MMDictationTaskDelegate, IMMDictationLogic>

@property (retain, nonatomic) NSHashTable *observerList;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSData *extraData;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *taskList;
@property (retain, nonatomic) MMDictationTask *currentTask;
@property (copy, nonatomic) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *resultText;

- (id)initWithScene:(long long)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)enumerateObserver:(id /* block */)a0;
- (BOOL)isRecording;
- (void)setDictationExtraData:(id)a0;
- (void)start;
- (void)stop:(long long)a0;
- (void)clear;
- (void)MMDictationTaskDidStart:(id)a0;
- (void)MMDictationTask:(id)a0 onLevelMeter:(float)a1;
- (void)MMDictationTask:(id)a0 didGetText:(id)a1;
- (void)MMDictationTaskDidEnd:(id)a0 reason:(unsigned long long)a1;
- (void)MMDictationTaskDidClear:(id)a0;
- (void)cancelCheckDisplayText;
- (void)checkDisplayText;
- (void)_checkDisplayText;
- (void)_flushText:(id)a0;
- (void).cxx_destruct;

@end
