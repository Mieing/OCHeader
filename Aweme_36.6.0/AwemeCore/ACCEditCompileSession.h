@class NSObject, NLEExportSession, VECompileSession;
@protocol ACCEditVideoDataProtocol;

@interface ACCEditCompileSession : NSObject

@property (retain, nonatomic) VECompileSession *veCompileSession;
@property (retain, nonatomic) NLEExportSession *nleExportSession;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;
@property (copy, nonatomic) id /* block */ progressBlock;

+ (void)transWithVideoData:(id)a0 transConfig:(id)a1 videoProcess:(id)a2 completeBlock:(id /* block */)a3;
+ (id)effectProcessWithVideoData:(id)a0;
+ (BOOL)isPreUploadable:(id)a0 transConfig:(id)a1 videoProcess:(id)a2;
+ (void)cancelTranscode:(id)a0;
+ (void)postTrack;
+ (void)checkCompileSessionReady:(id)a0 completionBlock:(id /* block */)a1;
+ (id)transcodeWithVideoData:(id)a0 size:(struct CGSize { double x0; double x1; })a1 bitrate:(int)a2 completionBlock:(id /* block */)a3;
+ (void)transcodeWithVideoData:(id)a0 completionBlock:(id /* block */)a1;
+ (void)setProgressBlock:(id /* block */)a0 videoData:(id)a1;
+ (id /* block */)getProgressBlock:(id)a0;
+ (void)setEncodeDataCallback:(id /* block */)a0 videoData:(id)a1;
+ (id /* block */)getEncodeDataCallback:(id)a0;
+ (void)enableDynamicSpeed:(BOOL)a0 videoData:(id)a1;
+ (id)getMVExportData:(id)a0 publishModel:(id)a1;
+ (void)resume:(id)a0;
+ (void)pause:(id)a0;

- (void)cancelTranscode;
- (id)initWithVideoData:(id)a0 config:(id)a1 effectUnit:(id)a2;
- (void)transcodeWithCompleteBlock:(id /* block */)a0;
- (id)initWithVideoData:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (void)cancel:(id /* block */)a0;

@end
