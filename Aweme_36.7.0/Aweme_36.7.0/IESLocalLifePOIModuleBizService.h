@class IESLLPOIDetailUploadHeaderImageHandler, IESLLPOIVideoFeedOpenService, NSString;

@interface IESLocalLifePOIModuleBizService : HTSService <IESLocalLifePOIModuleBizService>

@property (retain, nonatomic) IESLLPOIDetailUploadHeaderImageHandler *imageUploadHandler;
@property (retain, nonatomic) IESLLPOIVideoFeedOpenService *feedOpenHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEPOIModuleServiceCommonAdapterClass;
+ (void)removeScreenShootShareTarget:(id)a0;
+ (void)addTarget:(id)a0 withContext:(id)a1 trackParams:(id)a2;
+ (void)handleEnterAlbumActionFromViewController:(id)a0 withContext:(id)a1 pageContext:(id)a2 constData:(id)a3;
+ (id)getPOIDetailListAwemeUtil;

- (void)showPicturePreviewerWithParams:(id)a0;
- (void)openPOIMediaListWithParams:(id)a0;
- (void)openPOIPreviewPageWithParams:(id)a0;
- (id)getBcmChainForFantaPureFeatureWithExtraInfo:(id)a0;
- (BOOL)enableIM;
- (BOOL)shouldChangeVideoRefer;
- (id)aAWEMainModuleServiceDOUYINHTSAdaper;
- (id)aAWEPOIModuleServiceCommonAdapter;
- (void)openPOIImageUploadPreviewViewController:(id)a0 pageCotext:(id)a1 poiDetail:(id)a2 baseVC:(id)a3;
- (void)openVideoFeedWithActionContext:(id)a0 pageContext:(id)a1 constData:(id)a2;
- (void)openPOIFeed:(id)a0;
- (void).cxx_destruct;

@end
