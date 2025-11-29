@class WCAdURLImageView, WCCanvasClickEventManager, NSString, WCHighLightButton, UILongPressGestureRecognizer;

@interface WCCanvasButtonComponent : WCCanvasComponent <WCCanvasImageLoaderObserver, WCCanvasClickEventManagerDelegate>

@property (retain, nonatomic) WCHighLightButton *button;
@property (retain, nonatomic) WCAdURLImageView *bgImgView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longpressGesture;
@property (retain, nonatomic) WCCanvasClickEventManager *clickManager;
@property (nonatomic) BOOL dynamicButtonSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)onClickButton:(id)a0;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)a0;
- (void)onButtonClickEventWithSource:(unsigned long long)a0;
- (void)onLongpressButton:(id)a0;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentWillResumeState:(BOOL)a0;
- (void)ImageDidFail:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (id)fetchRelatedComponent;
- (void)onFinderLiveNoticeReserved;
- (BOOL)isAppointmentInfoValid;
- (void)onAppointmentUpdatingStatus:(int)a0;
- (void)checkAndUpdateButtonState;
- (void)checkFinderLiveNoticeButtonStateWithLocal;
- (void)setButtonColors:(BOOL)a0;
- (void)getComponentStyleWithBackgroundColor:(id *)a0 textColor:(id *)a1;
- (void)setComponentStyleWithBackgroundColor:(id)a0 textColor:(id)a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)setButtonComponentTitleColor:(id)a0 withDuration:(double)a1;
- (void)setButtonComponentTitleFont:(id)a0;
- (void)setButtonImage:(id)a0;
- (void)updateButtonImageColor;
- (void)onClickEventUpdateTitleWith:(id)a0;
- (void)onClickEventUpdateTitleWith:(id)a0 buttonAppearance:(BOOL)a1 buttonEnabled:(BOOL)a2;
- (void)tryUpdateFinderLiveNotice;
- (void).cxx_destruct;

@end
