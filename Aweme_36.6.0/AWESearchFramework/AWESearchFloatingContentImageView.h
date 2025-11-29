@class AWESearchBackgroundImageModel, UIImageView, UIScrollView, AWEURLModel;

@interface AWESearchFloatingContentImageView : UIView

@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) AWESearchBackgroundImageModel *imageModel;
@property (weak, nonatomic) UIScrollView *horizontalScrollView;
@property (weak, nonatomic) UIScrollView *verticalScrollView;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) double horizontalRange;
@property (nonatomic) double verticalOffset;
@property (nonatomic) unsigned long long horizontalStyle;

- (void)addNotifications;
- (void)onAWEUIThemeChangeNotification;
- (void)horizontalScrollViewOffsetChanged;
- (void)verticalScrollViewOffsetChanged;
- (void)p_reloadImage;
- (void)reloadImageModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)removeNotifications;
- (void)setupUI;

@end
