@class NSDictionary;

@interface LSFPushVideoFrameCacheNode : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBufferRef;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (nonatomic) int layerId;
@property (nonatomic) BOOL needRender;
@property (nonatomic) BOOL useAlpha;
@property (nonatomic) BOOL isMasterLayer;
@property (nonatomic) BOOL isCameraLayer;
@property (copy, nonatomic) NSDictionary *info;

- (void).cxx_destruct;

@end
