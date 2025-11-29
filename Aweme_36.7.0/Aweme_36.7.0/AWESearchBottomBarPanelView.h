@class CAGradientLayer, NSArray, UITapGestureRecognizer, NSString, UIView, UIPanGestureRecognizer, UITableView;

@interface AWESearchBottomBarPanelView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UITableView *wordsTableView;
@property (retain, nonatomic) UIView *bottomView;
@property (copy, nonatomic) NSArray *wordsModel;
@property (nonatomic) double originWordsTableCenterY;
@property (nonatomic) double bottomHeight;
@property (retain, nonatomic) UITapGestureRecognizer *closeTapGes;
@property (retain, nonatomic) UIPanGestureRecognizer *closePanGes;
@property (retain, nonatomic) UIPanGestureRecognizer *wordTablePanGes;
@property (nonatomic) double showTime;
@property (copy, nonatomic) id /* block */ didTappedWordBlock;
@property (copy, nonatomic) id /* block */ didCloseViewBlock;
@property (copy, nonatomic) id /* block */ didSlideWordsTabelEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)closeWithAnimation:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 words:(id)a1 bottomHeight:(double)a2;
- (void)closeWithAnimation:(BOOL)a0 slideOffsetY:(double)a1;
- (void)updateLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 words:(id)a1 bottomHeight:(double)a2;
- (void)updateWithWords:(id)a0;
- (void)showOn:(id)a0 animation:(BOOL)a1 completion:(id /* block */)a2;
- (void)closeWithAnimation:(BOOL)a0 type:(unsigned long long)a1;
- (void)closeWithAnimation:(BOOL)a0 type:(unsigned long long)a1 slideOffsetY:(double)a2;
- (void)handleCloseTap:(id)a0;
- (void)handelCloseViewPan:(id)a0;
- (void)handelWordsTablePan:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
