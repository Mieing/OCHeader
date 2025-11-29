@class CAGradientLayer, NSArray, NSString, NSMutableArray, UITableView;
@protocol AWEMusicPlayerLyricViewDelegate;

@interface AWEMusicShortLyricsView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) int lineIndex;
@property (retain, nonatomic) NSMutableArray *cellFrames;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (weak, nonatomic) id<AWEMusicPlayerLyricViewDelegate> delegate;
@property (retain, nonatomic) NSArray *lyricsModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)realHeight;
- (void)onLyricsChanged:(int)a0;
- (void)adjustLyricLine:(BOOL)a0;
- (void)computeFrames;
- (struct CGPoint { double x0; double x1; })lineOffset:(int)a0;
- (void)lyricChange:(BOOL)a0;
- (struct CGSize { double x0; double x1; })lyricLineSize:(int)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (double)startOffset;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)setup;
- (double)bottomInset;
- (void)clean;

@end
