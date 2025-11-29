@class NSString, MMMusicLyricVcCalculator;

@interface MMMusicListenLyricsViewController : WCListenLyricsViewController <MMMusicLyricVcCalculatorDelegate, IMusicPlayerExt> {
    MMMusicLyricVcCalculator *m_lyricCalcuator;
}

@property (nonatomic) long long curState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLyrics:(id)a0;
- (void)updateLyrics:(id)a0;
- (void)dealloc;
- (void)onCurrentLyricChangeTo:(id)a0 timeToNext:(double)a1 currIndex:(unsigned int)a2;
- (void)onUpdateCurOffset:(double)a0;
- (void)onMusicPlayStatusChanged;
- (void).cxx_destruct;

@end
