@class UIImageView, UIPanGestureRecognizer;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWECommentLivePhotoComponent : ACCFeatureComponent

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)livePhotoClicked:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isLivePhoto;

@end
