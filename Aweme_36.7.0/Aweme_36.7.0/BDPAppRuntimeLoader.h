@class NSString, BDPUniqueID, NSMutableDictionary;

@interface BDPAppRuntimeLoader : NSObject <BDPPageTimelineUploadParamProvider, BDPRuntimeServiceLoader>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *loadStatus;
@property (retain, nonatomic) NSMutableDictionary *pagePromiseDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loaderWithUniqueID:(id)a0;

- (void)loadServiceJSWithCommon:(id)a0 completion:(id /* block */)a1 pagePath:(id)a2;
- (void)loadPluginSDKServiceJSIfNeeded:(id)a0 completion:(id /* block */)a1;
- (id)getUploadParamForCollectName:(id)a0;
- (void)loadServiceJSIfNeededForPagePath:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
