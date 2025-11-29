@class NSString;

@interface IESLiveLinkRTCInteractClientUtils : NSObject

@property (copy, nonatomic) NSString *lastestAppId;

+ (id)convertToJsonData:(id)a0;
+ (struct __CVBuffer { } *)createDarkFrameWithFrameSize:(struct CGSize { double x0; double x1; })a0 enableLeakFix:(BOOL)a1;
+ (id)setPriorityForUrl:(id)a0;
+ (struct __CVBuffer { } *)copyPixelBufferWithPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)getPlayModeDescription:(long long)a0;
+ (unsigned long long)convertByteNetworkQuality:(unsigned long long)a0;
+ (id)parseStreamName:(id)a0;
+ (id)taskIdGenerate:(BOOL)a0;
+ (id)convertVideoCanvas:(id)a0;
+ (id)convertPublicStreaming:(id)a0;
+ (id)convertVideoFrameInfo:(id)a0;
+ (long long)convertVideoSinkPixelFormat:(long long)a0;
+ (void)getDefaultLayout:(id)a0 withLiveLinkLayout:(id)a1;
+ (void)copyLayout:(id)a0 withLiveLinkLayout:(id)a1 withWaterMark:(id)a2 videoSize:(struct CGSize { double x0; double x1; })a3;
+ (void)copyLayout:(id)a0 withLiveLinkLayout:(id)a1 videoSize:(struct CGSize { double x0; double x1; })a2;
+ (unsigned long long)transferRenderMode:(unsigned long long)a0;
+ (id)convertData:(struct __CVBuffer { } *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
+ (id)getRtcVendorName:(long long)a0;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
