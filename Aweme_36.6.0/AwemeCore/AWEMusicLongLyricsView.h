@class CAGradientLayer, UIPanGestureRecognizer, NSArray, AWEMusicLyricSeekIndicator, NSString, NSMutableArray, UITableView;
@protocol AWEMusicPlayerLyricViewDelegate;

@interface AWEMusicLongLyricsView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMusicLyricSeekIndicator *seekIndicator;
@property (nonatomic) int playingIndex;
@property (nonatomic) long long focalIndex;
@property (retain, nonatomic) NSMutableArray *cellFrames;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL enableAutoScroll;
@property (copy, nonatomic) id /* block */ scrollEndBlock;
@property (retain, nonatomic) UIPanGestureRecognizer *gesture;
@property (weak, nonatomic) id<AWEMusicPlayerLyricViewDelegate> delegate;
@property (retain, nonatomic) NSArray *lyricsModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLyricsChanged:(int)a0;
- (void)tableViewDidTap:(id)a0;
- (void)seekIndicatorDidTap;
- (void)adjustLyricLine:(BOOL)a0;
- (void)computeFrames;
- (double)startOffset:(int)a0;
- (struct CGPoint { double x0; double x1; })lineOffset:(long long)a0;
- (void)lyricChange:(BOOL)a0;
- (struct CGSize { double x0; double x1; })lyricLineSize:(long long)a0;
- (void)hideSeekIndicator;
- (int)indexOfOffsetY:(double)a0;
- (void)dispatchScrollToPlayingLine;
- (void)cancelScrollToPlayingLine;
- (void)showSeekIndicator;
- (void)scrollAnimEnd:(double)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)topInset;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)endOffset;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)reset;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setup;
- (double)bottomInset;
- (void)clean;

@end
