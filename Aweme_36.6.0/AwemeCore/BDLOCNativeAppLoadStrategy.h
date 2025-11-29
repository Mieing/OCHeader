@class NSString;
@protocol BDLOCNativeAppLifeCycleDelegate;

@interface BDLOCNativeAppLoadStrategy : NSObject <BDLOCNativeAppLifeCycleDelegate>

@property (weak, nonatomic) id<BDLOCNativeAppLifeCycleDelegate> loadListener;
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
- (id)executeWithSchema:(id)a0 params:(id)a1 listener:(id)a2;
- (void)app:(id)a0 didFailToRequestMetaDataWithError:(id)a1;
- (void)loadNativeAppMountDelegateForApp:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
