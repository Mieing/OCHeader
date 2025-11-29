@class UILongPressGestureRecognizer, NSString, AWEGrouponLifeFeedsPageContext, AWEGrouponLifeFeedsBaseComponentVM, UITapGestureRecognizer;
@protocol AWEGrouponLifeFeedsBaseComponentViewPrivateDelegate;

@interface AWEGrouponLifeFeedsBaseComponentView : UIView <UIGestureRecognizerDelegate, AWEGrouponLifeFeedsAutoPlayProtocal>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsBaseComponentViewPrivateDelegate> private_delegate;
@property (weak, nonatomic) AWEGrouponLifeFeedsPageContext *pageContext;
@property (weak, nonatomic) AWEGrouponLifeFeedsBaseComponentVM *viewModel;
@property (readonly) NSString *identifier;
@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPlay;
- (void)startPlay;
- (void)bindViewModel:(id)a0;
- (id)customTrackParams;
- (void)trackCellClick;
- (void)trackCellShow;
- (id)sceneFromNegativeFeedbackSetting;
- (id)feedbackModelWithLongPress:(id)a0;
- (void)cellDidScrollDisappearTwoThirds;
- (void)cellDidScrollAppearTwoThirds;
- (BOOL)trackClientShowEnable;
- (BOOL)trackClientClickEnable;
- (void)tryAddTapGesture;
- (void)tryAddLongPressGestureRecognizer;
- (id)buildTrackParams;
- (void)longPressGestureAction:(id)a0;
- (void)trackCellExposure;
- (void)bindActionAndState;
- (void)didClickComponent;
- (id)feedbackDataWithHeight:(double)a0;
- (id)hostCardInfoFromBizData:(id)a0 cardType:(id)a1 height:(double)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canAutoPlay;
- (void)tapAction:(id)a0;

@end
