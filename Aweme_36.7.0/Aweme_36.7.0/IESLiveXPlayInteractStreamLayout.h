@class NSString, NSTimer;

@interface IESLiveXPlayInteractStreamLayout : NSObject <IESLiveInteractiveStreamLayout>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraRect;
@property (nonatomic) BOOL hideCameraRegion;
@property (nonatomic) long long podZOrder;
@property (nonatomic) BOOL isWtnPushStream;
@property (copy, nonatomic) NSString *wtnStreamID;
@property (retain, nonatomic) NSTimer *seiTimer;
@property (copy, nonatomic) NSString *seiString;
@property (nonatomic) BOOL remoteDidFirstFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (void)updateWtnInfo:(BOOL)a0 wtnStreamID:(id)a1;
- (void)updateCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hideCameraRegion:(BOOL)a1;
- (void)startSEI;
- (void)parseSEIString:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
