@class NSString;
@protocol VERecorderPublicProtocol;

@interface AFDMomentCameraPreview : UIView <AFDMomentCameraPreviewProtocol>

@property (nonatomic) BOOL enableInteraction;
@property (nonatomic) BOOL shouldHandleTouch;
@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
