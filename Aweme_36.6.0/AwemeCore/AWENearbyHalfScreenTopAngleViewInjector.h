@class AWENearbyHalfScreenContainerArrowView, UIViewController, NSString;
@protocol AWENearbyHalfScreenContainerProtocol;

@interface AWENearbyHalfScreenTopAngleViewInjector : NSObject <AWENearbyHalfScreenInjectedViewProtocol>

@property (weak, nonatomic) UIViewController<AWENearbyHalfScreenContainerProtocol> *targetVC;
@property (weak, nonatomic) AWENearbyHalfScreenContainerArrowView *injectedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downLoadRichArrowWithStyleConfig:(id)a0 completion:(id /* block */)a1;
- (void)loadImageWithUrlModel:(id)a0 imageView:(id)a1 completion:(id /* block */)a2;
- (id)initWithTargetVC:(id)a0;
- (void)willBecomeFullScreen:(id)a0 targetVC:(id)a1;
- (void)didBecomeFullScreen:(id)a0 targetVC:(id)a1;
- (void)didAddContentView:(id)a0 targetVC:(id)a1;
- (void)updateInjectedTargetVC:(id)a0;
- (void)willDissmissInjectedTargetVC:(id)a0;
- (void)hiddenInjectedTargetVC:(id)a0;
- (void)__addContentView:(id)a0 targetVC:(id)a1;
- (void)__updateInjectedTargetVC:(id)a0;
- (void)addRichArrowViewWithContentView:(id)a0 targetVC:(id)a1;
- (void)addNormalArrowWithContentView:(id)a0 targetVC:(id)a1;
- (void)setupTargetImageFrameWithTargetVC:(id)a0;
- (void)clickTarget;
- (void)layoutNormalArrowWithContentView:(id)a0 targetVC:(id)a1;
- (void)showNormalArrowWithSloganStyleWithTargetVC:(id)a0;
- (void)layoutRichArrowWithContentView:(id)a0 targetVC:(id)a1;
- (void).cxx_destruct;

@end
