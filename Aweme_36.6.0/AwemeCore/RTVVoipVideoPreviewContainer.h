@class NSMutableDictionary, NSArray, RTVVoipVideoPreviewContainerContext, UIView, NSMutableArray, NSString;
@protocol RTVObservable, RTVSessionPreviewProcotol, RTVUserProfileManagerInterface, RxInjector, RTVVoipConfigureManagerInterface, RTVVoipVideoPreviewContainerDelegate, RTVVoipVideoPreviewLayout;

@interface RTVVoipVideoPreviewContainer : UIView <RTVVoipSessionObserver, RTVVoipVideoPreviewViewDelegate, RTVRendererProtocol, RTVXRPreviewInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (retain, nonatomic) RTVVoipVideoPreviewContainerContext *context;
@property (readonly, nonatomic) id<RTVObservable> contextController;
@property (retain, nonatomic) NSMutableDictionary *previewMapper;
@property (readonly, nonatomic) UIView *previewContainer;
@property (retain, nonatomic) NSMutableArray *reusePreviews;
@property (readonly, nonatomic) id<RTVVoipVideoPreviewLayout> previewLayout;
@property (copy, nonatomic) NSArray *lastPreviews;
@property (retain, nonatomic) UIView *previewLastFrameView;
@property (retain, nonatomic) id<RTVUserProfileManagerInterface> userProfileManager;
@property (nonatomic) BOOL apparent;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigManager;
@property (weak, nonatomic) id<RTVVoipVideoPreviewContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)notifyChangeActive:(BOOL)a0;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)rtvSession:(id)a0 contextKeyPathChange:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (void)__createDependency;
- (void)switchLayout:(BOOL)a0 animator:(id)a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)__handleStatusBarOrientationDidChangeNotification:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewViewFrameForParticipator:(id)a0;
- (id)averageColorRGBForSelf:(BOOL)a0;
- (id)initWithContextController:(id)a0;
- (void)notifyChangeToApparent:(BOOL)a0;
- (void)__refreshPreviewViews:(BOOL)a0;
- (void)__removePreviewLastFrameView;
- (void)__showPreviewLastFrameIfNeeded;
- (id)__keyFromPreview:(id)a0;
- (BOOL)__isInLastRowWithPreviewIndex:(unsigned long long)a0 count:(unsigned long long)a1;
- (void)__applyWithParticipators:(id)a0 animated:(BOOL)a1;
- (void)previewView:(id)a0 didClickAvatarView:(id)a1;
- (BOOL)isDemandExclusiveOnScreen;
- (void)__layoutPreviews:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })__transformFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)chatRoomViewControllerWillSwitchToNarrow:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
