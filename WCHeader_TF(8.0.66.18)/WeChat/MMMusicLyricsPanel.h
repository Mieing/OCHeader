@class UIView, NSString, UITapGestureRecognizer, MMMusicFadeOutView, UITableView, MMMusicInfo, MMMusicLyricVcCalculator, MMUIButton;
@protocol MMMusicLyricsPanelDelegate;

@interface MMMusicLyricsPanel : UIView <UITableViewDelegate, UITableViewDataSource, MMMusicLyricVcCalculatorDelegate, IMusicPlayerExt, UIGestureRecognizerDelegate> {
    MMMusicInfo *m_musicInfo;
    UITableView *_lyricsView;
    unsigned int _currentLyricIndex;
    unsigned int _lastLyricIndex;
    MMMusicLyricVcCalculator *m_lyricCalcuator;
    MMMusicFadeOutView *m_lyricBgView;
    UIView *m_bottomView;
    MMUIButton *m_upBtn;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lyricsViewFrame;
    BOOL isFirstLocation;
    unsigned int _fixedLine;
    BOOL _isAnimating;
    unsigned long long mode;
}

@property (nonatomic) double lyricsViewCenterY;
@property (nonatomic) double lyricsViewHeight;
@property (nonatomic) double upBtnTop;
@property (nonatomic) double animLimitLyricsViewMinHeight;
@property (nonatomic) double animLimitLyricsViewMaxHeight;
@property (nonatomic) double animLimitUpBtnMinTop;
@property (nonatomic) double animLimitUpBtnMaxTop;
@property (retain, nonatomic) UITapGestureRecognizer *exitTapGestureRecognizer;
@property (weak, nonatomic) id<MMMusicLyricsPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMusicInfo:(id)a0 andLyricsViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (void)initView;
- (void)initLyricsListView;
- (void)initUpBtn;
- (void)updateLyrics:(id)a0;
- (void)addBottomViewPanGesture:(id)a0;
- (void)layoutSubviews;
- (void)setFixedLine:(unsigned int)a0;
- (void)setAnimatingState:(BOOL)a0;
- (void)onClickUpBtn;
- (void)close;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)textFontForSection:(unsigned int)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)shouldPlayLyricAnimation;
- (void)onCurrentLyricChangeTo:(id)a0 timeToNext:(double)a1 currIndex:(unsigned int)a2;
- (void)updateUIWithCurrIndex:(unsigned int)a0;
- (void)tryToLocateFirstProperLyricInRightPos;
- (void)tryToLocateProperLyricInTopArea;
- (void)tryToLocateProperLyricInBottomArea;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)tapGestureRecognized:(id)a0;
- (void)markPreviousValue;
- (void)updateValueWithMovement:(double)a0;
- (double)calculateNewMovement:(double)a0;
- (void)resetValue;
- (BOOL)isOverMinLimit;
- (void)reset;
- (void)runCloseAnimation;
- (void)runCloseStep2Animation;
- (void).cxx_destruct;

@end
