@class NSArray, NSString, AWEMusicPlayerLyricContainer, AWEGradientView;

@interface AWEMusicFeedLyricsItemViewController : AWEMusicFeedBaseItemViewController <AWEMusicPlayerLyricContainerDelegate>

@property (retain, nonatomic) AWEGradientView *bgView;
@property (retain, nonatomic) AWEMusicPlayerLyricContainer *lyricContainerView;
@property (retain, nonatomic) NSArray *lyricsModels;
@property (nonatomic) int currentLyricsIndex;
@property (nonatomic) BOOL isLyricsProcessing;
@property (nonatomic) BOOL isItemAppearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemViewDidAppear;
- (void)updatePlayProgressTime:(double)a0 animation:(BOOL)a1;
- (void)itemDidDisappear;
- (void)itemViewDidReset;
- (void)playerControlViewProgressGestureDidEnd:(id)a0 currentTime:(double)a1 progress:(double)a2 completion:(id /* block */)a3;
- (void)updateLyricsModels:(id)a0;
- (void)updateLyricsCurrentTime:(double)a0;
- (void)findCurrentLyric:(double)a0;
- (void)showGradientView:(BOOL)a0;
- (void)onCoverLongTapped;
- (void)onCoverStatusChanged:(unsigned long long)a0;
- (void)seekToPlayLyricsIndex:(int)a0 completion:(id /* block */)a1;
- (void)onChangedOfLyricsStatus:(unsigned long long)a0 isManual:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateUI;

@end
