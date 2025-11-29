@class NSString;

@interface IESLiveLGameInteractStreamLayout : NSObject <IESLiveInteractiveStreamLayout>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraRect;
@property (nonatomic) BOOL remoteDidFirstFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (void)updateCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
