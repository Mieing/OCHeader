@class NSString, UIView;
@protocol ACCStickerEventFlowProtocol, ACCGestureResponsibleStickerProtocol, ACCStickerContainerProtocol;

@interface CKSInternalGestureProvider : NSObject <UIGestureRecognizerDelegate, CKSStickerGestureProviderProtocol>

@property (weak, nonatomic) UIView<ACCGestureResponsibleStickerProtocol> *gestureTargetView;
@property (weak, nonatomic) id<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGesture;
- (void)panAction:(id)a0;
- (void)pinchAction:(id)a0;
- (void)rotationAction:(id)a0;
- (id)initWithWeakReferenceOfStickerContainer:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)gestureView;
- (void)tapAction:(id)a0;

@end
