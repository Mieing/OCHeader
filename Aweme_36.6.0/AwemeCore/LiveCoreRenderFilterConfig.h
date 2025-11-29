@class NSString, LSGLExternalEffectCallback;

@interface LiveCoreRenderFilterConfig : NSObject

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSString *effectPlatformConfig;
@property (copy, nonatomic) NSString *effectABInfo;
@property (copy, nonatomic) NSString *effectABLicense;
@property (nonatomic) BOOL usingNewEffectMsgRegister;
@property (nonatomic) BOOL renderOnSingleView;
@property (nonatomic) BOOL useExternalEffect;
@property (retain, nonatomic) LSGLExternalEffectCallback *externalEffectCallback;
@property (nonatomic) BOOL skipMix;

+ (id)defaultConfiguration;

- (id)setMixedOutputWidth:(int)a0 height:(int)a1;
- (void).cxx_destruct;

@end
