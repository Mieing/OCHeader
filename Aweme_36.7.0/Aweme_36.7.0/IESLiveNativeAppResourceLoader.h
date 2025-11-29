@class NSString, BDLOCNativeAppLoadStrategy;
@protocol IESLiveNativeAppLoaderDelegate;

@interface IESLiveNativeAppResourceLoader : NSObject <BDLOCNativeAppLifeCycleDelegate>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) id<IESLiveNativeAppLoaderDelegate> delegate;
@property (retain, nonatomic) BDLOCNativeAppLoadStrategy *strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appDidRenderFirstFrame:(id)a0;
- (void)appDidFinishWarmBoot:(id)a0;
- (void)app:(id)a0 didReceiveMetaData:(id)a1;
- (void)app:(id)a0 didFinishDownload:(id)a1;
- (void)app:(id)a0 didDownloadInProgress:(float)a1;
- (void)app:(id)a0 didFinishLoading:(id)a1;
- (void)app:(id)a0 didFailToRequestMetaDataWithError:(id)a1;
- (id)loadResourceWithSchema:(id)a0 params:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
