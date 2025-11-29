@class NSString, IESGCPDetailLaunchDownloadButtonConfig;

@interface IESGCPTestGameDownloadButtonViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber>

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *openSchema;
@property (nonatomic) BOOL isSupportIOS;
@property (copy, nonatomic) NSString *downloadInfo;
@property (copy, nonatomic) NSString *planID;
@property (nonatomic) BOOL autoOpenTestGameDownloadPage;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *fullScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *currentThemeConfig;
@property (copy, nonatomic) id /* block */ themeConfigDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (id)getDefaultDownloadButtonConfig;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (void)openTestGameDownlaodPage:(double)a0;
- (void)testGameDownloadButtonDidClick:(double)a0;
- (id)restrictTestButtonConfigWithUseHalfScreenConfig:(BOOL)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
