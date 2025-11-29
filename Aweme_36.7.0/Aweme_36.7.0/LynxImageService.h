@class IESForestResponse, LynxUIImage, NSString;

@interface LynxImageService : NSObject <LynxServiceImageProtocol>

@property (retain, nonatomic) IESForestResponse *response;
@property (weak, nonatomic) LynxUIImage *imageUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAnimatedImage:(id)a0;
- (void)reportResourceStatus:(id)a0 data:(id)a1 extra:(id)a2;
- (void)pauseImage:(id)a0 callback:(id /* block */)a1;
- (void)stopImage:(id)a0 callback:(id /* block */)a1;
- (void)resumeImage:(id)a0 callback:(id /* block */)a1;
- (BOOL)restartImageIfPossible:(id)a0 callback:(id /* block */)a1;
- (void)setAutoPlay:(id)a0 value:(BOOL)a1;
- (void)addAnimatedImageCallBack:(id)a0 UI:(id)a1;
- (BOOL)checkImageType:(id)a0;
- (id /* block */)loadNewImageFromURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 enableGenericFetcher:(BOOL)a2 contextInfo:(id)a3 processors:(id)a4 completed:(id /* block */)a5 LynxUIImage:(id)a6;
- (void)appendExtraImageLoadDetailForEvent:(id)a0 originalDetail:(id)a1;
- (id)getMappedCategorizedPicErrorCode:(id)a0;
- (void)prefetchImage:(id)a0 params:(id)a1;
- (void)prefetchImage:(id)a0 params:(id)a1 completed:(id /* block */)a2;
- (void)handleAnimatedImage:(id)a0 view:(id)a1 loopCount:(long long)a2;
- (void)setFrameCacheAutomatically:(id)a0 value:(BOOL)a1;
- (BOOL)checkImageType:(id)a0 callback:(id /* block */)a1;
- (void)failCallback:(id /* block */)a0 message:(id)a1;
- (void)successCallback:(id /* block */)a0 message:(id)a1;
- (id /* block */)loadNewImageWithFetcher:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 processors:(id)a3 completed:(id /* block */)a4;
- (void)reportError:(id)a0 errInfo:(id)a1;
- (id)syncProcessorsHandler:(id)a0 withImage:(id)a1;
- (long long)generateRequestOptions:(id)a0;
- (double)toPointValue:(id)a0 ui:(id)a1;
- (void)updateTargetSize:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)imageView;
- (id)decodeImage:(id)a0;

@end
