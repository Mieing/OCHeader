@interface OMJCaptureOptions : NSObject

@property (readonly, nonatomic) BOOL isUseFrontCamera;
@property (readonly, nonatomic) BOOL isAudioEnabled;
@property (readonly, nonatomic) BOOL isChangeBackgroundImageEnabled;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxRecordingDuration;

- (id)initWithIsUseFrontCamera:(BOOL)a0 isAudioEnabled:(BOOL)a1 isChangeBackgroundImageEnabled:(BOOL)a2 maxRecordingDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

@end
