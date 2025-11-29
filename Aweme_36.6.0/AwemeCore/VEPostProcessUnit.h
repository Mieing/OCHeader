@class IESImageAnimationStickerFilter, NSString, HTSGLContext, HTSGLFilterInput, HTSRawDataOutputRender;

@interface VEPostProcessUnit : VEUnitObject <VEProcessSampleDelegate>

@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) HTSGLFilterInput *inputFilter;
@property (retain, nonatomic) IESImageAnimationStickerFilter *stickerFilter;
@property (retain, nonatomic) HTSRawDataOutputRender *outputRender;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeStickerWithKey:(id)a0;
- (BOOL)processSampleData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addSticker:(id)a0;

@end
