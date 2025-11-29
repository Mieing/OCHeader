@class AWESearchBackgroundColorModel, NSHashTable, AWEGradientView, UIView, UIScrollView;

@interface AWESearchFloatingBackgroundColorView : UIView {
    BOOL _forceCallStateChanged;
    BOOL _hideTop;
    BOOL _hideCard;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *dragView;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) NSHashTable *delegates;
@property (nonatomic) BOOL forceHideBackground;
@property (retain, nonatomic) AWESearchBackgroundColorModel *lastLayoutColorModel;
@property (retain, nonatomic) AWESearchBackgroundColorModel *colorModel;
@property (nonatomic) double cardHeight;
@property (nonatomic) double lastCardHeight;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) double verticalOffset;
@property (nonatomic) unsigned long long horizontalStyle;
@property (weak, nonatomic) UIScrollView *horizontalScrollView;
@property (weak, nonatomic) UIScrollView *verticalScrollView;
@property (readonly, nonatomic) BOOL topViewAppear;
@property (readonly, nonatomic) BOOL cardViewAppear;

- (void)addNotifications;
- (void)onAWEUIThemeChangeNotification;
- (void)forceHideBackground:(BOOL)a0;
- (void)horizontalScrollViewOffsetChanged;
- (void)forceCallStateChangedDelegate;
- (void)p_reloadColor;
- (void)verticalScrollViewOffsetChanged;
- (double)resultBackgroundColorViewHeight;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)removeNotifications;
- (void)setupUI;

@end
