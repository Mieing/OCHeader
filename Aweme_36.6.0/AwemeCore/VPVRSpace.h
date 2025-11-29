@protocol MTLBuffer;

@interface VPVRSpace : NSObject {
    void *_space;
    id<MTLBuffer> _vertexBuffer;
    struct { void /* unknown type, empty encoding */ columns[4]; } _orientation;
}

@property (readonly, nonatomic) unsigned long long spaceType;
@property (readonly, nonatomic) id<MTLBuffer> vertexBuffer;
@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } orientation;

- (void)createSpaceWithType:(unsigned long long)a0 configuration:(id)a1;
- (void)updateOrientationWithPitch:(float)a0 yaw:(float)a1 roll:(float)a2;
- (id)initWithSpaceType:(unsigned long long)a0 configuration:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
