@class NSString, UIImageView, UIVisualEffectView, NSURL, NSMutableArray, UIButton;

@interface IESLiveShareCaptureWidget : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSMutableArray *seriesImages;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UIButton *shareBtn;
@property (nonatomic) struct CGSize { double width; double height; } streamSize;
@property (nonatomic) BOOL enableNewStyle;
@property (retain, nonatomic) NSURL *localVideoPath;
@property (copy, nonatomic) id /* block */ shareAction;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (nonatomic) BOOL hasCommonSnapShotNoShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panGestureActions:(id)a0;
- (void)refreshAutoDismissTimer;
- (void)applyCaptureFrom:(id)a0 target:(id)a1 completed:(id /* block */)a2;
- (id)initWithStream:(struct CGSize { double x0; double x1; })a0 style:(unsigned long long)a1 noShare:(BOOL)a2;
- (void)addRightSwipeDissmissGesture;
- (void)onBeginShareAction:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;
- (BOOL)addPreviewImage:(id)a0;

@end
