@class NSString, UIView;
@protocol RTVSessionPreviewProcotol, RTVInteractionPreviewContentDelegate, RxInjector, RTVInteractionController, RTVXRControllerInjector, RTVInteractionNarrowContentView;

@interface RTVInteractionNarrowView : UIView <RTVXRControllerInterface, RTVInteractionPreviewSimpleContent>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (retain, nonatomic) NSString *interactionType;
@property (retain, nonatomic) UIView<RTVInteractionNarrowContentView> *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVInteractionPreviewContentDelegate> delegate;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)deactivatePreview;
- (void)__createContent;
- (void)__layoutContent;
- (void).cxx_destruct;
- (void)activePreview;

@end
