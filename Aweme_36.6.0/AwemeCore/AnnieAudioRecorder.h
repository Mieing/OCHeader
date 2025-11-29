@class PuzzleContext, NSString;
@protocol AnnieAudioRecorderProviderDelegate;

@interface AnnieAudioRecorder : NSObject <AnnieAudioRecorderProvider> {
    struct OpaqueAudioQueue { } *_audioQueue;
}

@property (weak, nonatomic) id<AnnieAudioRecorderProviderDelegate> delegate;
@property (weak, nonatomic) PuzzleContext *context;
@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecord;
- (BOOL)startRecord;
- (void)callBackDidOccurOSErrorWithCode:(int)a0;
- (void).cxx_destruct;
- (BOOL)prepareToRecord;

@end
