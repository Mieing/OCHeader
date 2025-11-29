@class HTSGLFilter, HTSVideoData;
@protocol IESVideoEngineEffectProtocol;

@interface VELVEffectProcessUtils : NSObject

@property (retain, nonatomic) HTSGLFilter<IESVideoEngineEffectProtocol> *effectProcessUnit;
@property (retain, nonatomic) HTSVideoData *videoData;

- (unsigned long long)addTemplateWithResourcePath:(id)a0 dependResourceParams:(id)a1;
- (long long)setTemplateStickerTextParams:(long long)a0 textParams:(id)a1;
- (id)getTemplateStickerTextParams:(long long)a0;
- (id)initWithVideoData:(id)a0;
- (void).cxx_destruct;

@end
