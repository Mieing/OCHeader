@class NSMapTable;

@interface BDLOCNativeAppLifeCycleDelegateRegistry : NSObject

@property (retain, nonatomic) NSMapTable *appIdToMultDelegateMap;

- (void)appDidRenderFirstFrame:(id)a0;
- (void)appDidFinishWarmBoot:(id)a0;
- (void)app:(id)a0 didReceiveMetaData:(id)a1;
- (void)app:(id)a0 didFinishDownload:(id)a1;
- (void)app:(id)a0 didDownloadInProgress:(float)a1;
- (void)app:(id)a0 didFinishLoading:(id)a1;
- (void)app:(id)a0 didFailToRequestMetaDataWithError:(id)a1;
- (void)app:(id)a0 pageWillEnterWithPagePath:(id)a1;
- (void)app:(id)a0 pageDidEnterWithPagePath:(id)a1;
- (void)app:(id)a0 pageWillLeaveWithPagePath:(id)a1;
- (void)app:(id)a0 pageDidLeaveWithPagePath:(id)a1;
- (void)app:(id)a0 changePageWithPagePath:(id)a1 queryDict:(id)a2;
- (id)delegateForApp:(id)a0;
- (void)registerDelegate:(id)a0 forApp:(id)a1;
- (void)unregisterDelegate:(id)a0 forApp:(id)a1;
- (void)unregisterAllDelegateForApp:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
