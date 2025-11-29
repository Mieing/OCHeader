@class _TtC9CameraKit13CameraContext, _TtC9CameraKit16CameraSessionKey;

@interface CameraKit.CameraSession : NSObject {
    void /* unknown type, empty encoding */ veCameraContext;
    void /* unknown type, empty encoding */ active;
}

@property (nonatomic, readonly) _TtC9CameraKit13CameraContext *cameraContext;
@property (nonatomic, readonly) _TtC9CameraKit16CameraSessionKey *sessionKey;
@property (nonatomic, weak) void /* function */ serviceContainer;

- (void).cxx_destruct;
- (id)init;

@end
