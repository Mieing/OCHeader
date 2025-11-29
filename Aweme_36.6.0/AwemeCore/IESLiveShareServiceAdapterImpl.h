@class NSString;

@interface IESLiveShareServiceAdapterImpl : IESLiveBaseAdapter <IESLiveShareServiceAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)isShareCommandViewShowing;
- (void)trackEvent:(id)a0 params:(id)a1 trackContext:(id)a2;
- (id)roomService;
- (void)dealVSSnapShotShareAction:(id)a0 localScreenshotURL:(id)a1 eventContext:(id)a2;
- (void)dealLandScapeScreenShotAction:(id)a0 localScreenshotURL:(id)a1 eventContext:(id)a2;
- (id)createVSScreenRecordShareContentModel:(id)a0 recordVideoURL:(id)a1 recordVideoAsset:(id)a2;
- (void)setRecordVideoAsset:(id)a0 inShareContentModel:(id)a1;
- (void)trackEventNoLivePrefix:(id)a0 params:(id)a1 trackContext:(id)a2;

@end
