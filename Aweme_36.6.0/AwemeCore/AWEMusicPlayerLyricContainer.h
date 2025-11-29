@class NSString, NSArray, AWEMusicShortLyricsView, AWEMusicLongLyricsView, UIView, UILabel, AWEMusicPlayerCoverView;
@protocol AWEMusicPlayerLyricContainerDelegate;

@interface AWEMusicPlayerLyricContainer : UIView <AWEMusicPlayerLyricViewDelegate, AWEMusicPlayerCoverViewDelegate>

@property (retain, nonatomic) UIView *shortLyricsContainer;
@property (retain, nonatomic) UIView *longLyricsContainer;
@property (retain, nonatomic) AWEMusicShortLyricsView *shortLyricsView;
@property (retain, nonatomic) AWEMusicLongLyricsView *longLyricsView;
@property (retain, nonatomic) UIView *copyrightPreview;
@property (retain, nonatomic) UILabel *copyrightPreviewLabel;
@property (retain, nonatomic) AWEMusicPlayerCoverView *coverView;
@property (retain, nonatomic) UILabel *noLyricsLabel;
@property (nonatomic) double coverWidth;
@property (nonatomic) double coverheight;
@property (nonatomic) double coverToLyricsSpace;
@property (nonatomic) double shortLyricsHeight;
@property (nonatomic) double shortLyricsLeft;
@property (weak, nonatomic) id<AWEMusicPlayerLyricContainerDelegate> delegate;
@property (retain, nonatomic) NSArray *lyricsModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCoverImageUrl:(id)a0;
- (void)updateCopyrightPreviewDuration:(unsigned long long)a0;
- (void)showNoLyricsView:(BOOL)a0 withCopyrightPreview:(BOOL)a1;
- (void)onLyricsChanged:(int)a0;
- (void)seekToPlayLyricsIndex:(int)a0 completion:(id /* block */)a1;
- (void)changeToLyricType:(unsigned long long)a0 animation:(BOOL)a1;
- (void)coverStatusChanged:(unsigned long long)a0;
- (void)coverLongTapped;
- (void)showLyricType:(unsigned long long)a0;
- (void)layoutShortLyricsContainer;
- (void)layoutLongLyricsContainer;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)setup;
- (void)viewDidDisappear;
- (void)calculateSize;

@end
