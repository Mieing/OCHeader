@protocol IESLiveRoomService;

@interface IESLiveScreenshotStreamConfigConstructor : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) struct CGSize { double width; double height; } deviceSize;
@property (nonatomic) long long screenHeight;
@property (nonatomic) BOOL isIpad;

- (id)constructStreamConfigWithRoom:(id)a0 clarityConfig:(id)a1 deviceSize:(struct CGSize { double x0; double x1; })a2 isIpad:(BOOL)a3;
- (id)preprocessRTMPPushSDKParams:(id)a0 isLandscape:(BOOL)a1 clarityConfig:(id)a2;
- (id)adaptWidthHeight:(id)a0 isLandscape:(BOOL)a1;
- (void).cxx_destruct;

@end
