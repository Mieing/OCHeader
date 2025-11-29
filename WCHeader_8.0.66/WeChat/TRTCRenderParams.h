@interface TRTCRenderParams : NSObject

@property (nonatomic) long long rotation;
@property (nonatomic) long long fillMode;
@property (nonatomic) unsigned long long mirrorType;

- (struct RenderParams { struct Optional<liteav::video::FillMode> { struct OptionalStorage<liteav::video::FillMode, true, true> { BOOL x0; union { char x0; int x1; } x1; } x0; } x0; struct Optional<liteav::video::MirrorMode> { struct OptionalStorage<liteav::video::MirrorMode, true, true> { BOOL x0; union { char x0; int x1; } x1; } x0; } x1; struct Optional<liteav::video::VideoRotation> { struct OptionalStorage<liteav::video::VideoRotation, true, true> { BOOL x0; union { char x0; int x1; } x1; } x0; } x2; struct Optional<unsigned int> { struct OptionalStorage<unsigned int, true, true> { BOOL x0; union { char x0; unsigned int x1; } x1; } x0; } x3; })convertToCppParams;
- (id)description;

@end
