@class XVisComposeElement;

@interface XComposeTextureWrapper : NSObject {
    void *yTexture;
    void *uvTexture;
    unsigned int yTextureId;
    unsigned int uvTextureId;
    unsigned int paramUniformId;
    unsigned int yuvTypeUniformIndex;
}

@property (retain, nonatomic) XVisComposeElement *element;

- (id)initWithComposeElement:(id)a0;
- (void)registerExternalTextureWithGraph:(void *)a0;
- (void)sample:(void *)a0;
- (void)bindTexture:(void *)a0 resource:(void *)a1;
- (void)setTextureIdY:(unsigned int)a0 uv:(unsigned int)a1;
- (void)setParamsUniformId:(unsigned int)a0;
- (void)setYUVTypeUniformIndex:(unsigned int)a0;
- (void)bindYUVTypeToUniformBuffer:(void *)a0;
- (void).cxx_destruct;

@end
