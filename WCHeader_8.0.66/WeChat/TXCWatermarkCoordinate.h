@class NSString;

@interface TXCWatermarkCoordinate : NSObject <TXCRenderCoordinate> {
    float _positionVertexBytes[8];
    float _texcoordVertexBytes[8];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _inputSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateCoordinate:(struct CGSize { double x0; double x1; })a0;
- (float *)positionVertexBytes;
- (float *)texcoordVertexBytes;
- (unsigned long long)texcoordVertexCount;
- (float *)texcoordVertexAtIndex:(unsigned long long)a0;

@end
