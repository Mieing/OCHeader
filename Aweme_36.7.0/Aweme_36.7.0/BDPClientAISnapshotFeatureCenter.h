@class NSOperationQueue, NSString, BDPThreadSafeDictionary;

@interface BDPClientAISnapshotFeatureCenter : NSObject <BDPWebViewPageLifeCycleMessage, BDPClientAISnapshotFeatureCenter>

@property (retain, nonatomic) NSOperationQueue *taskQueue;
@property (retain, nonatomic) BDPThreadSafeDictionary *keyOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)pageWillRecycle:(id)a0 webview:(id)a1;
- (void)clearSnapshotImageCache:(id)a0;
- (void)screenShotWithPagePath:(id)a0 webView:(id)a1 detectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 compressLevel:(long long)a3 completion:(id /* block */)a4;
- (void)screenShotWithPagePath:(id)a0 webView:(id)a1 detectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
