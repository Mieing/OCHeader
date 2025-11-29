@class NSString, BDLOCSonicLoadStrategy;
@protocol IESLiveGameOpenPlatformResourceLoaderDelegate;

@interface IESLiveGameOpenPlatformSonicResourceLoader : NSObject <BDLOCSonicLoadListener, BDLiveOpenContainerLoadListener, IESLiveGameOpenPlatformResourceLoader>

@property (retain, nonatomic) BDLOCSonicLoadStrategy *strategy;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *appID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveGameOpenPlatformResourceLoaderDelegate> delegate;

- (void)didFailedWithSchemaError:(id)a0;
- (void)app:(id)a0 sendFrameBuffer:(struct __CVBuffer { } *)a1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)app:(id)a0 resourceLoadProgress:(double)a1;
- (void)app:(id)a0 resourceDidFinishLoadWithError:(id)a1 hasCache:(BOOL)a2;
- (void)app:(id)a0 loadProgress:(double)a1;
- (void)app:(id)a0 didFinishLoadWithResult:(BOOL)a1 error:(id)a2;
- (void)app:(id)a0 didRenderFirstFrame:(id)a1;
- (void)app:(id)a0 didLoadConfig:(id)a1;
- (void)app:(id)a0 didReceiveException:(id)a1;
- (void)app:(id)a0 finishLoadContent:(id)a1;
- (void)app:(id)a0 subContainerDidRenderFirstFrame:(id)a1;
- (id)preloadResourceWithSchema:(id)a0 params:(id)a1 callbacks:(id)a2;
- (id)loadResourceWithSchema:(id)a0 params:(id)a1 callbacks:(id)a2;
- (id)loadResourceWithSchema:(id)a0 params:(id)a1 isPreload:(BOOL)a2 callbacks:(id)a3;
- (void)updateLoadProgress:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidStop:(id)a0;

@end
