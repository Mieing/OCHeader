@protocol MTLBuffer;

@interface VPVRGeometryData : NSObject {
    id<MTLBuffer> _vertexBuffer;
}

@property (nonatomic) void *geometryData;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } initialModelMatrix;
@property (readonly, nonatomic) id<MTLBuffer> vertexBuffer;
@property (readonly, nonatomic) unsigned long long vertexCount;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
