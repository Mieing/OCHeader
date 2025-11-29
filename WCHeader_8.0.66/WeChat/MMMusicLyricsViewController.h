@class UIView, NSString, MMMusicHorizontalScrollingView, MMWebImageView, MMUIButton, UIButton, UIPanGestureRecognizer, MMMusicInfo, MMMusicListenLyricsViewController, UILabel, MMMusicLyricsPanel;
@protocol MMMusicLyricsViewControllerDelegate;

@interface MMMusicLyricsViewController : MMUIViewController <MMMusicLyricsPanelDelegate, MMMusicLyricsRtnExt, WCListenLyricsViewControllerDelegate, WCListenLyricsViewControllerDataSource, UIGestureRecognizerDelegate> {
    MMMusicInfo *m_musicInfo;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_lyricsViewFrame;
    MMMusicLyricsPanel *m_lyricsPanel;
    MMWebImageView *m_albumImageView;
    UIView *m_bgCoverView;
    MMUIButton *m_upBtn;
}

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture1;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture2;
@property (nonatomic) BOOL isDragOrClickLyrics;
@property (nonatomic) BOOL isLargeImageMode;
@property (retain, nonatomic) MMMusicHorizontalScrollingView *titleScrollingView;
@property (retain, nonatomic) MMMusicHorizontalScrollingView *musicianScrollingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *musicianLabel;
@property (retain, nonatomic) UIButton *topAreaTapBtn;
@property (retain, nonatomic) MMMusicListenLyricsViewController *lyricContainerVC;
@property (weak, nonatomic) id<MMMusicLyricsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMusicInfo:(id)a0 andLyricsViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)initView;
- (void)initUpBtn;
- (void)initData;
- (id)getLyrics;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)changeImageMode:(BOOL)a0;
- (void)onTapTopArea;
- (void)handleSlide:(id)a0;
- (void)onWillCloseLyricsPanel;
- (void)onClickUpBtn;
- (void)onDragOrClickLyrics;
- (void)onLyricsDidSlideUp:(double)a0;
- (void)onMusicLyricDidSeekToTime:(double)a0;
- (void)OnGetLyrics:(id)a0 Lyrics:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)wcListenLyricsViewController:(id)a0 didSelectLyric:(double)a1;
- (void)wcListenLyricsViewControllerDidDragging:(id)a0;
- (BOOL)isMusicPlaying:(id)a0;
- (void).cxx_destruct;

@end
