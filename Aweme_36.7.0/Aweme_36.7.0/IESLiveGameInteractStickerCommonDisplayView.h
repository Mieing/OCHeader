@class IESLiveGameInteractStickerCommonCarouselDisplayView, NSString, NSTimer, IESLiveGameInteractStickerModel, UIView, NSNumber, IESLiveGameInteractStickerCommonRoleInfoDisplayView;

@interface IESLiveGameInteractStickerCommonDisplayView : UIView <IESLiveGameInteractStickerDisplayViewProtocol>

@property (retain, nonatomic) IESLiveGameInteractStickerModel *stickerModel;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveGameInteractStickerCommonRoleInfoDisplayView *roleView;
@property (retain, nonatomic) IESLiveGameInteractStickerCommonCarouselDisplayView *carouselView;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL dismissWhenLandspace;
@property (nonatomic) double startLoadTime;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (copy, nonatomic) id /* block */ didLoadFinishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)scaleRatio;
- (void)updateStickerModel:(id)a0;
- (void)setupBackgroundColor;
- (void)callLoadFinishedBlock:(BOOL)a0 error:(id)a1 isFirstCreate:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stickerModel:(id)a1 roomID:(id)a2 context:(id)a3 didLoadFinishedBlock:(id /* block */)a4;
- (long long)getReuseID;
- (void)setDidCloseCallBack:(id /* block */)a0;
- (void)setupSubViews:(BOOL)a0;
- (void)dismissWhenCountdown;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)stopCountdown;
- (void)startCountdown;
- (void)handleOrientationChange:(long long)a0;

@end
