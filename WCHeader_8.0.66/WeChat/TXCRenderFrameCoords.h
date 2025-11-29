@class NSString, TXCVideoFrameCoords;

@interface TXCRenderFrameCoords : NSObject <TXCRenderCoordinate>

@property (readonly, nonatomic) TXCVideoFrameCoords *frameCoords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (float *)positionVertexBytes;
- (unsigned long long)texcoordVertexCount;
- (float *)texcoordVertexAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
