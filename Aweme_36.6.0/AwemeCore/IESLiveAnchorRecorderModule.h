@class NSString, HTSLiveRecordCameraProcesser, UIView;
@protocol IESLiveRecoder;

@interface IESLiveAnchorRecorderModule : IESLiveAnchorExecutionModule <IESLiveAnchorCameraProvider>

@property (retain, nonatomic) id<IESLiveRecoder> camera;
@property (retain, nonatomic) HTSLiveRecordCameraProcesser *cameraProcessor;
@property (weak, nonatomic) UIView *virtualLivePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleWithContext:(id)a0 camera:(id)a1;
+ (id)moduleWithContext:(id)a0 camera:(id)a1 virtualLivePreview:(id)a2;

- (void)bindService;
- (void)liveRoomWillDealloc;
- (id)initWithContext:(id)a0 camera:(id)a1 virtualLivePreview:(id)a2;
- (void).cxx_destruct;
- (void)updateCamera:(id)a0;
- (void)setup;

@end
