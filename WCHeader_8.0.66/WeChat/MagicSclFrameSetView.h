@class WACanvasCoverViewContainer, NSString, _TtC6WeChat22MagicSclViewCoverLogic, NSMutableArray, _TtC6WeChat16MagicSclFrameSet;

@interface MagicSclFrameSetView : UIView <WeChat.ICommonCoverViewProvider>

@property (retain, nonatomic) _TtC6WeChat16MagicSclFrameSet *frameSet;
@property (retain, nonatomic) NSString *frameSetName;
@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) _TtC6WeChat22MagicSclViewCoverLogic *coverLogic;
@property (retain, nonatomic) WACanvasCoverViewContainer *coverView;
@property (retain, nonatomic) NSMutableArray *canvasIds;
@property (nonatomic) BOOL isOutOfBounds;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) BOOL unbindFrameSetOnDealloc;
@property (nonatomic) long long viewState;
@property (nonatomic) unsigned long long activeTime;
@property (nonatomic) int viewId;

- (id)init:(id)a0;
- (id)init:(id)a0 bizName:(id)a1;
- (void)resetFrameSet:(id)a0;
- (void)resetViewId:(int)a0;
- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initFrameSet:(id)a0;
- (void)bind:(id)a0;
- (void)unbind;
- (void)addSubview:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willMoveToWindow:(id)a0;
- (id)provideContainerView;
- (void)showStartupCoverView;
- (void)removeStartupCoverViewFromScl;
- (void).cxx_destruct;

@end
