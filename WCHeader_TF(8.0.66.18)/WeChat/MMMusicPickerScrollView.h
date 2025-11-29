@class NSString, UIScrollView, NSMutableArray, UITapGestureRecognizer;
@protocol MMMusicPickerScrollViewDelegate;

@interface MMMusicPickerScrollView : MMUIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *musicPickerContentViews;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (copy, nonatomic) NSString *musicLogoName;
@property (weak, nonatomic) id<MMMusicPickerScrollViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 musicLogoName:(id)a1;
- (void)setupMusicData:(id)a0 withMoveTo:(int)a1;
- (void)setCurrentContentState:(BOOL)a0;
- (void)readyToPlay;
- (void)replay;
- (void)replayFromFlowInMs:(unsigned long long)a0;
- (BOOL)isAnimating;
- (void)initData;
- (void)initView;
- (void)prepareScrollView:(id)a0;
- (void)onChangeToNextIndex:(long long)a0;
- (void)changeSelectStateForToNextIndex:(long long)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)tapAction:(id)a0;
- (void).cxx_destruct;

@end
