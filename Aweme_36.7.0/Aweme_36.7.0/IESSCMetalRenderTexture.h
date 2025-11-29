@protocol MTLTexture;

@interface IESSCMetalRenderTexture : NSObject

@property (retain, nonatomic) id<MTLTexture> texture;
@property (nonatomic) long long textureIndex;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;

@end
