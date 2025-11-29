@class UIStackView, NSArray, AWESlidingViewController, NSString, UIView, NSMutableArray;
@protocol AWEMusicSegmentedControlDelegate;

@interface AWEMusicSegmentedControl : UIView <AWESlidingTabbarProtocol>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *darkSelectedLineView;
@property (retain, nonatomic) UIView *lightSelectedLineView;
@property (retain, nonatomic) UIView *seperateView;
@property (nonatomic) long long playingIndex;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<AWEMusicSegmentedControlDelegate> delegate;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeReload;
- (void)configSubviews;
- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1 tapped:(BOOL)a2;
- (void)slidingControllerDidScroll:(id)a0 isFigureDragging:(BOOL)a1;
- (id)initWithItems:(id)a0 defaultSelectedIndex:(long long)a1;
- (void)tabChangedProgress:(double)a0 fromIndex:(long long)a1 toIndex:(long long)a2;
- (void)updatePlayIndex:(long long)a0 currentIndex:(long long)a1 isPlaying:(BOOL)a2;
- (void)tab:(id)a0 changeToSelected:(BOOL)a1 animated:(BOOL)a2;
- (id)titleFontWithSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)singleTap:(id)a0;
- (void)updateAccessibilityLabel;

@end
