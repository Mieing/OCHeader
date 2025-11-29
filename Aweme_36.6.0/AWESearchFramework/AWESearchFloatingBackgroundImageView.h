@class AWESearchBackgroundImageModel, UIImageView, NSHashTable, UIScrollView, AWEURLModel;

@interface AWESearchFloatingBackgroundImageView : UIView {
    BOOL _forceCallStateChanged;
    BOOL _hideImageVertical;
    BOOL _hideImageHorizontal;
}

@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSHashTable *delegates;
@property (nonatomic) BOOL forceHideBackground;
@property (readonly, nonatomic) AWESearchBackgroundImageModel *imageModel;
@property (weak, nonatomic) UIScrollView *horizontalScrollView;
@property (weak, nonatomic) UIScrollView *verticalScrollView;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) double horizontalRange;
@property (nonatomic) double verticalOffset;
@property (nonatomic) unsigned long long horizontalStyle;
@property (readonly, nonatomic) BOOL topViewAppear;
@property (readonly, nonatomic) BOOL cardViewAppear;

- (void)addNotifications;
- (void)onAWEUIThemeChangeNotification;
- (void)forceHideBackground:(BOOL)a0;
- (void)horizontalScrollViewOffsetChanged;
- (void)verticalScrollViewOffsetChanged;
- (void)p_reloadImage;
- (double)resultBackgroundImageViewHeight;
- (void)reloadImageModel:(id)a0;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)removeNotifications;
- (void)setupUI;

@end
