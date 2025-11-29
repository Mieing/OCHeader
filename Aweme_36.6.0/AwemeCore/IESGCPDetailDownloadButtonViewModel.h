@class IESGCPPBGameDetailDownloadButtonV2, IESGCPDetailLaunchDownloadButtonConfig, NSString;

@interface IESGCPDetailDownloadButtonViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPPBGameDetailDownloadButtonV2 *buttonData;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *fullScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *currentThemeConfig;
@property (copy, nonatomic) id /* block */ themeConfigDidChange;
@property (readonly, nonatomic) BOOL isSupportDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)openAppStoreControllerWithTrackParams:(id)a0 completion:(id /* block */)a1;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (id)unsupportedDownloadBtnText;
- (id)getDefaultDownloadButtonConfig;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (id)gameRatingString;
- (id)downloadButtonConfigWithUseHalfScreenConfig:(BOOL)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
