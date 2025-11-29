@class UILongPressGestureRecognizer, NSString, NSDictionary, AWEProfilePadWatchVideoMaskView, AWEUserWorkCellComponentAccessibilityModel, AWEPostVideoMaskView, AWEUserWorkCellViewModel;
@protocol AWEUserWorkCollectionViewCellTabDelegate;

@interface AWEUserWorkCollectionViewComponentCell : UICollectionViewCell <AWEUserWorkCollectionViewComponentCellProtocol>

@property (retain, nonatomic) AWEUserWorkCellViewModel *viewModel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSString *trackerContentType;
@property (copy, nonatomic) NSString *trackerEnterMethod;
@property (retain, nonatomic) NSDictionary *trackerCommonParams;
@property (retain, nonatomic) AWEPostVideoMaskView *currentVideoMaskView;
@property (retain, nonatomic) AWEProfilePadWatchVideoMaskView *currentWatchVideoMaskView;
@property (weak, nonatomic) id<AWEUserWorkCollectionViewCellTabDelegate> tabDelegate;
@property (retain, nonatomic) AWEUserWorkCellComponentAccessibilityModel *accessibilityModel;
@property (copy, nonatomic) id /* block */ hitTestBlock;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id /* block */)shareConfigurationHandler;
- (id)chooseButton;
- (id)coverContainerView;
- (BOOL)shouldUseDynamicCover:(id)a0;
- (void)clearAnimatedImageBuffer;
- (void)performHighlightAnimation:(unsigned long long)a0;
- (void)configTabDelegate:(id)a0;
- (void)markCurrentVideo:(BOOL)a0 text:(id)a1 alpha:(double)a2;
- (void)markCurrentWatchVideoFromDetail:(BOOL)a0;
- (void)configLongPressGesture:(BOOL)a0;
- (void)showLongPressPanelWithMethod:(id)a0;
- (BOOL)currentVideoMaskViewShow;
- (void)performFlashAnimation;
- (void)performZoomAnimation:(unsigned long long)a0;
- (void)trackLongPressPanelShow;
- (void)showNewPressPanelForScene:(id)a0 method:(id)a1;
- (id)generateStoryModel;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageView;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleLongPressGesture:(id)a0;
- (id)tabName;

@end
