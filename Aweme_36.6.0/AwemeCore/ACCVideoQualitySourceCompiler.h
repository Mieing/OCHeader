@class NSString, AWEVideoPublishViewModel;
@protocol ACCEditVideoDataProtocol;

@interface ACCVideoQualitySourceCompiler : NSObject <ACCVideoQualityCompilerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (nonatomic) BOOL forceReencode;
@property (weak, nonatomic) id<ACCEditVideoDataProtocol> videoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transParam;
- (void)setRemuxBitrateLimit:(id)a0;
- (void)setCompileFileResolution:(struct CGSize { double x0; double x1; })a0;
- (void)setCompileFileBitrate:(id)a0;
- (void)setForceReCompile:(BOOL)a0;
- (void)setRemuxSizeLimit:(struct CGSize { double x0; double x1; })a0;
- (void)setCompileFileFps:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
