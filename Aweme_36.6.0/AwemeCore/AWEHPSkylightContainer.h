@class AWEHPSkylightObject, NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEHPSkylightContainer : UIView <UIGestureRecognizerDelegate, AWEHPSkylightProtocol>

@property (retain, nonatomic) UIView *approachView;
@property (retain, nonatomic) AWEHPSkylightObject *skylightObject;
@property (retain, nonatomic) UIView *tapMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)directionForPan:(id)a0;
- (void)homepageUndertakeSkylightViewWillAppear;
- (void)homepageUndertakeSkylightViewDidAppear;
- (void)homepageUndertakeSkylightViewWillDisappear;
- (void)homepageUndertakeSkylightViewDidDisappear;
- (void)homepageSkylightBindUndertakeHost:(id)a0 withCommunicationObject:(id)a1;
- (void)homepageSkylightContainerDidLoad;
- (void)homepageUndertakeSkylightEnterWithModel:(id)a0;
- (void)homepageUndertakeSkylightLeaveWithModel:(id)a0;
- (void)updateContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_didSingleClickMask:(id)a0;
- (void)p_didPan:(id)a0;
- (id)currentHomepageSkylightContext;
- (id)initWithSkylightObject:(id)a0 withAccessApproach:(id)a1 withUndertakeHost:(id)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
