@class NSString, NSMutableSet, NSHashTable;

@interface AWEIMProcessFactory : NSObject <AWEIMProcessEventDelegate>

@property (retain, nonatomic) NSMutableSet *keepLifeCycleProcessSet;
@property (retain, nonatomic) NSHashTable *eventListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentQueue;
+ (id)shareInstance;

- (id)sendVideo:(id)a0;
- (id)sendImage:(id)a0;
- (id)sendCombineShareMsg:(id)a0;
- (void)registEventListener:(id)a0;
- (id)sendVoice:(id)a0;
- (void)unRegistEventListener:(id)a0;
- (void)onProcessDidStartWithProcess:(id)a0;
- (void)onProcessDidFinishWithProcess:(id)a0;
- (void)onProcessStageDidStartWithStage:(id)a0 process:(id)a1;
- (void)onProcessStageDidFinishWithStage:(id)a0 process:(id)a1;
- (id)resend:(id)a0 conversation:(id)a1;
- (void)keepLifeCycleUntilFinish:(id)a0;
- (id)p_getTypeWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)sendFile:(id)a0;
- (id)sendLocation:(id)a0;

@end
