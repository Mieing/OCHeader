@class IESSCMetalRenderBuffer;

@interface IESSCMetalRenderDrawOptions : NSObject

@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic) unsigned long long vertexStart;
@property (nonatomic) unsigned long long vertexCount;
@property (retain, nonatomic) IESSCMetalRenderBuffer *imageVertices;

- (void).cxx_destruct;
- (id)init;

@end
