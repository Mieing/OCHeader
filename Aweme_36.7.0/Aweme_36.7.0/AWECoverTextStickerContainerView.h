@class NSString, AWEInteractionStickerLocationModel, AWECoverTextStickerView, UIView, ACCStickerContainerView, UIPanGestureRecognizer;
@protocol AWECoverStickerContainerViewDelegate, ACCStickerProtocol;

@interface AWECoverTextStickerContainerView : UIView <UIGestureRecognizerDelegate, ACCStickerContainerDelegate>

@property (retain, nonatomic) AWEInteractionStickerLocationModel *locationModel;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) ACCStickerContainerView *containerView;
@property (retain, nonatomic) UIView<ACCStickerProtocol> *stickerWrapView;
@property (retain, nonatomic) AWECoverTextStickerView *stickerView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } stickerViewCenter;
@property (weak, nonatomic) id<AWECoverStickerContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panAction:(id)a0;
- (void)stickerContainer:(id)a0 gestureStarted:(id)a1 onView:(id)a2;
- (void)stickerContainer:(id)a0 gestureEnded:(id)a1 onView:(id)a2;
- (BOOL)stickerContainerTapBlank:(id)a0 gesture:(id)a1;
- (double)mediaContainerScaleFactor;
- (void)configPlayerFrame;
- (void)setStickerPlaceholderHide:(BOOL)a0;
- (void)removeSticker;
- (void)updateStickerModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fontScale:(double)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })stickerTransform;
- (struct CGPoint { double x0; double x1; })stickerCenterOnView:(id)a0;
- (void)recoverStickerViewLocation:(id)a0;
- (id)p_createImageView;
- (id)p_covertGemetryMode:(id)a0;
- (void)p_updateStickerLocation:(id)a0;
- (void)p_showMaskView;
- (void)p_hiddenMaskView;
- (void)resetStickerPosition;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)configureViews;

@end
