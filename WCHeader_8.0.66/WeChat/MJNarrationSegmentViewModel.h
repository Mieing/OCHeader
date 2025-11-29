@class OMCNarrationSegment, NSMutableArray, NSString;
@protocol MJMovieComposingContext;

@interface MJNarrationSegmentViewModel : MJAudialClipSegmentViewModel

@property (retain, nonatomic) OMCNarrationSegment *narrationSegment;
@property (retain, nonatomic) NSMutableArray *captionItems;
@property (nonatomic) unsigned long long sttLoadingStatus;
@property (nonatomic) unsigned long long voiceChangeLoadingStatus;
@property (readonly, weak, nonatomic) id<MJMovieComposingContext> composingContext;
@property (readonly, nonatomic) NSString *audioFileID;
@property (readonly, nonatomic) BOOL isUsingOriginSpeech;
@property (nonatomic) float volume;
@property (copy, nonatomic) id /* block */ mockUpdateVoiceLabelHandler;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) NSString *roleName;

- (id)initWithNarrationSegment:(id)a0 composingContext:(id)a1;
- (BOOL)syncWithSegment:(id)a0;
- (void)syncWithNarrationSegmentImpl;
- (void)dealloc;
- (void)updateCaptionItems:(id)a0;
- (id)captionTextAtTimeInTimeline:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setCaptionText:(id)a0 atTimeInTimeline:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateSTTLoadingStatus:(unsigned long long)a0;
- (BOOL)resetVoiceToOriginWithTakeSnapshot:(BOOL)a0 autoPlay:(BOOL)a1;
- (BOOL)_resetVoiceToOriginInNarrationSpeakWithTakeSnapshot:(BOOL)a0 autoPlay:(BOOL)a1;
- (BOOL)_resetVoiceToOriginInNarrationTextInputWithTakeSnapshot:(BOOL)a0 autoPlay:(BOOL)a1;
- (BOOL)_replaceVoiceWithRoleID:(id)a0 roleName:(id)a1 audioFilePath:(id)a2 takeSnapshot:(BOOL)a3 autoPlay:(BOOL)a4;
- (void)requestVoiceChangeWithRoleID:(id)a0 roleName:(id)a1 takeSnapshot:(BOOL)a2 autoPlay:(BOOL)a3 completion:(id /* block */)a4;
- (void)requestVoiceChangeWithTakeSnapshot:(BOOL)a0 autoPlay:(BOOL)a1 completion:(id /* block */)a2;
- (void)_asyncRequestTTSWithAudioID:(id)a0 roleID:(id)a1 roleName:(id)a2 captionItems:(id)a3 totalDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 takeSnapshot:(BOOL)a5 autoPlay:(BOOL)a6 completion:(id /* block */)a7;
- (void)_asyncRequestVocalEnhancementWithAudioID:(id)a0 roleID:(id)a1 roleName:(id)a2 takeSnapshot:(BOOL)a3 autoPlay:(BOOL)a4 completion:(id /* block */)a5;
- (void)cancelCurrentVoiceChangeRequestIfNeeded;
- (void)cancelSTTRequestIfNeeded;
- (void)_updateRoleID:(id)a0 roleName:(id)a1;
- (void)_updateSpeechFileIfNeeded;
- (BOOL)_tryCachedSpeechFileWithRoleID:(id)a0 roleName:(id)a1 takeSnapshot:(BOOL)a2 autoPlay:(BOOL)a3;
- (void)bindSignals;
- (void)_vocalEnhancementRequestStatusDidUpdateWithAudioID:(id)a0 roleID:(id)a1 status:(unsigned long long)a2;
- (void)_stsRequestStatusDidUpdateWithAudioID:(id)a0 roleID:(id)a1 status:(unsigned long long)a2;
- (void)_ttsRequestStatusDidUpdateWithAudioID:(id)a0 roleID:(id)a1 status:(unsigned long long)a2;
- (void)_sttRequestStatusDidUpdateWithAudioID:(id)a0 status:(unsigned long long)a1;
- (void)_updateSTSRequestStatus;
- (void)_updateRequestStatus;
- (void)_loadSTTLoadingStatusWithSegment:(id)a0;
- (void)requestSTTWithCompletion:(id /* block */)a0;
- (void)syncWithMutationEntry:(id)a0;
- (BOOL)isTextEditableAtPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isSpeechRecognitionAvailable;
- (id)description;
- (void).cxx_destruct;

@end
