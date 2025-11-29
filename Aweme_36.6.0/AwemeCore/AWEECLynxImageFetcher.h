@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEECLynxImageFetcher : NSObject <IESECEcomImageFetcher, LynxImageFetcher>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double geckoBeginTime;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) unsigned long long apiType;
@property (nonatomic) BOOL useEcomImage;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)disablePreloadAllFrame;
+ (id)createFetcherWithBizTag:(id)a0 sceneTag:(id)a1 pageName:(id)a2 logExtra:(id)a3;

- (id /* block */)loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)setPlaceholderWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2;
- (void)fetchGeckoWithULR:(id)a0 size:(struct CGSize { double x0; double x1; })a1 geckoMessage:(id)a2 contextInfo:(id)a3 completion:(id /* block */)a4;
- (void)geckoMonitorWithError:(id)a0 message:(id)a1 image:(id)a2 contextInfo:(id)a3;
- (void)useAPIWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)getGeckoMessageWithContext:(id)a0 completion:(id /* block */)a1;
- (void)useIESAPIWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)useBDAPIWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)iesecImageOptionForContext:(id)a0;
- (id)getRealBizTag:(id)a0 currentBizTag:(id)a1;
- (id)getRealSceneTag:(id)a0 currentSceneTag:(id)a1;
- (long long)bdImageOption;
- (void)fetchGeckoSyncWithULR:(id)a0 size:(struct CGSize { double x0; double x1; })a1 geckoMessage:(id)a2 completion:(id /* block */)a3;
- (id)monitorInfoFrom:(id)a0;
- (id)getECImageFromContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)accessKey;

@end
