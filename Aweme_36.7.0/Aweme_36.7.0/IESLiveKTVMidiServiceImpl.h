@class IESLiveKTVMidiViewModel, NSString, IESLiveKTVMIDIView, UIView;
@protocol IESLiveKTVStreaming;

@interface IESLiveKTVMidiServiceImpl : NSObject <IESLiveKTVMidiService>

@property (weak, nonatomic) id<IESLiveKTVStreaming> ktvStreaming;
@property (retain, nonatomic) IESLiveKTVMIDIView *midiView;
@property (retain, nonatomic) IESLiveKTVMidiViewModel *midiViewModel;
@property (nonatomic) long long style;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) long long lastSentenceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnableAudioScoreWhenLocalPlay:(BOOL)a0;
- (void)startScore;
- (void)stopScore;
- (void)setSingScoreWithMidiFilePath:(id)a0 lyricFilePath:(id)a1;
- (id)getMidiDataArray;
- (id)getScoreRealtimeInfo;
- (void)stopMidiScore;
- (BOOL)isMidiShowing;
- (id)getMidiScoreInfo;
- (void)setupMidiStyle:(long long)a0 room:(id)a1;
- (void)startMidiScoreWithSongStruct:(id)a0;
- (id)getMidiView;
- (void)updateDressInfo;
- (void)updateMusicCurrentTime:(double)a0;
- (BOOL)isMidiPaused;
- (void)updateMidiContainer:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)seek:(double)a0;
- (double)averageScore;

@end
