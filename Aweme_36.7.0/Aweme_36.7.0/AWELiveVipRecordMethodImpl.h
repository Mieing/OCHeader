@class AWELiveVipAudioRecorder, NSString;

@interface AWELiveVipRecordMethodImpl : AWELiveVipRecordMethod <AWELiveAudioMessageRecorderDelegate>

@property (retain, nonatomic) AWELiveVipAudioRecorder *recorder;
@property BOOL isRecording;
@property BOOL isCanceled;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)audioRecorderStartRecord:(id)a0 error:(id)a1;
- (void)audioRecorderDidFinishRecording:(id)a0 success:(BOOL)a1 error:(id)a2;
- (id)getFileURL;
- (void)startRecordWithCompletionHandler:(id /* block */)a0;
- (void)cancelRecordWithCompletionHandler:(id /* block */)a0;
- (void)stopRecordWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
