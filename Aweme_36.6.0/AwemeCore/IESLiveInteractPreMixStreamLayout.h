@class NSString, IESLiveInteractionLayout;
@protocol IESLiveInteractionLinkerService;

@interface IESLiveInteractPreMixStreamLayout : NSObject <IESLiveInteractivePreMixStreamLayout>

@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastVisibleCameraRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } validCameraRect;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithStreamLayout:(id)a0;
- (void)updateLocalCameraFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)currentLayoutPreMixConfig;
- (id)initWithInteractionLayout:(id)a0 initialCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)resumeLatestValidCameraRect;
- (void).cxx_destruct;

@end
