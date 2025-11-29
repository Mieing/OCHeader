@class UIButton, MMMusicMVPreviewEpisodeSelectView, MMTimer, NSString, UILabel, MMUIButton, MMMVPlayer;

@interface MMMusicMVPreviewViewController : MMUIViewController <MMMusicMVPlayerBgViewDelegate, IMMMusicLyricServiceExt, IMusicPlayerExt, MMMVPlayerDelegate, MMMusicMVPreviewEpisodeSelectViewDelegate>

@property (retain, nonatomic) MMMVPlayer *mvPlayer;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIButton *commitButton;
@property (retain, nonatomic) MMMusicMVPreviewEpisodeSelectView *episodeSelectView;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) MMTimer *musicMonitorTimer;
@property (nonatomic) BOOL markedVideoOffsetDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)setupSubviews;
- (void)startPostingProgress;
- (void)endPostingProgress;
- (id)trackItems;
- (void)handleTappedCloseButton;
- (void)handleTappedCommitButton;
- (id)episodeSelectViewDataSource;
- (void)episodeSelectViewDidSelectEpisodeAtIndex:(unsigned long long)a0;
- (void)MVPlayer:(id)a0 didUpdateEpisodeIndexFrom:(unsigned int)a1 toIndex:(unsigned int)a2;
- (void).cxx_destruct;

@end
