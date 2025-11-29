@class UIView, ShakeMusicInfo, MMWebImageView, NSArray, MMTimer, UIImageView, NSString, MMUILabel, MMTableView, MMUIButton;

@interface ShakeMusicResultNoPermViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, ShakeMusicResultNoPermMusicCellViewDelegate>

@property (retain, nonatomic) MMWebImageView *musicCoverBgImageView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *recognitionResultLabel;
@property (retain, nonatomic) UIView *tableHeaderView;
@property (retain, nonatomic) MMWebImageView *musicCoverImageView;
@property (retain, nonatomic) MMUILabel *musicSongNameLabel;
@property (retain, nonatomic) MMUILabel *musicSingerNameLabel;
@property (retain, nonatomic) MMTableView *lyricsTableView;
@property (retain, nonatomic) MMUILabel *lyricsTableViewEmptyLabel;
@property (retain, nonatomic) UIView *blackLineView;
@property (retain, nonatomic) MMUILabel *copyrightInfoLabel;
@property (retain, nonatomic) UIImageView *copyrightInfoIconView;
@property (retain, nonatomic) MMTableView *musicTableView;
@property (retain, nonatomic) ShakeMusicInfo *shakeMusicInfo;
@property (retain, nonatomic) NSArray *musicInfoArr;
@property (retain, nonatomic) NSArray *lyricsArr;
@property (retain, nonatomic) NSArray *lyricsTimeArr;
@property (retain, nonatomic) MMTimer *lyricsTimer;
@property (nonatomic) double lyricsTimeInterval;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL shouldUseCustomPopAnimation;
@property (nonatomic) BOOL shouldLayoutHeaderView;
@property (nonatomic) BOOL lyricLocatingWithAnim;
@property (nonatomic) BOOL isScrollingLyrics;
@property (copy, nonatomic) id /* block */ onPopBlock;
@property (nonatomic) unsigned long long openScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShakeMusicInfo:(id)a0;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)dealloc;
- (void)setupSubviews;
- (void)loadData;
- (void)layoutInternal;
- (void)viewDidLayoutSubviews;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)closeButtonDidClick;
- (id)getMusicShareItem:(id)a0;
- (id)generateEmptyMVModel;
- (void)startTimer;
- (void)endTimer;
- (void)timerCallback;
- (void)cellPlayButtonClick:(id)a0 withIndex:(long long)a1;
- (void)cellInfoButtonClick:(long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
