@class UIFont, UIColor, NSString, UIScrollView, NSMutableArray, UIView;
@protocol CameraScanTabViewDelegate;

@interface CameraScanTabView : MMUIView <UIScrollViewDelegate>

@property (retain, nonatomic) NSMutableArray *tabButtonList;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *indectorView;
@property (nonatomic) unsigned long long currTabIndex;
@property (nonatomic) unsigned long long targetTabIndex;
@property (nonatomic) unsigned long long beginDragTabIndex;
@property (nonatomic) long long fromTabAction;
@property (nonatomic) BOOL isForceUpdatingContentOffset;
@property (retain, nonatomic) NSMutableArray *voiceOverElements;
@property (readonly, nonatomic) unsigned long long tabButtonsCount;
@property (readonly, nonatomic) unsigned long long lastScrollSwitchBeginTimeStamp;
@property (weak, nonatomic) id<CameraScanTabViewDelegate> tabViewDelegate;
@property (nonatomic) unsigned long long initTabIndex;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleNormalColor;
@property (retain, nonatomic) UIColor *titleHighlightColor;
@property (nonatomic) double scrollViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)appendWithTitle:(id)a0 tag:(unsigned long long)a1;
- (void)showTabButtons;
- (void)scrollSwitchToTabIndex:(long long)a0 hasShock:(BOOL)a1 tabAction:(long long)a2;
- (void)onDidLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)isTabIndexValid:(long long)a0;
- (void)setScrollTargetIndex:(unsigned long long)a0 tabAction:(long long)a1;
- (void)scrollDidSwitchToTargetIndex;
- (BOOL)isSwitchingToTargetIndex;
- (void)takeShock;
- (void)selectTabIndex:(long long)a0 hasShock:(BOOL)a1 tabAction:(long long)a2;
- (long long)calDotPointTabIndexWithScrollView:(id)a0;
- (struct CGPoint { double x0; double x1; })calContentOffsetForTabBtnIndex:(unsigned long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onTabButtonClick:(id)a0;
- (void)initVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
