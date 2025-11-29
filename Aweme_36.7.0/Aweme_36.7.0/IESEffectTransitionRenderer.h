@class IESMMEffectConfig, NSString, HTSGLContext;

@interface IESEffectTransitionRenderer : NSObject

@property (nonatomic) void *renderMangerHandle;
@property (retain, nonatomic) IESMMEffectConfig *effectConfig;
@property (copy, nonatomic) NSString *preResourcePath;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) double progress;

- (BOOL)setupEngineHandler;
- (void)setLoadResourceTimeout:(int)a0;
- (BOOL)checkInputParamsIsValid:(struct CGSize { double x0; double x1; })a0;
- (void)checkEffectError:(int)a0 msg:(id)a1;
- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTransitionInfo:(id)a0 outputFrame:(id)a1;
- (void)setResolution:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setPath:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setDuration:(double)a0;

@end
