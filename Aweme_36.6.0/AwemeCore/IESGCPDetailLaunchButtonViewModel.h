@class IESGCPPBGameDetailMiniGameLaunchButton, IESGCPDetailLaunchDownloadButtonConfig, NSString;

@interface IESGCPDetailLaunchButtonViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPPBGameDetailMiniGameLaunchButton *pbModel;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *fullScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *currentThemeConfig;
@property (readonly, nonatomic) BOOL isBottomFloatingStyle;
@property (copy, nonatomic) id /* block */ themeConfigDidChange;
@property (readonly, nonatomic) NSString *gameID;
@property (readonly, nonatomic) NSString *gameName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (void)handleButtonDidClick;
- (id)getDefaultDownloadButtonConfig;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (void)trackHeliumGameEntranceShow;
- (void)trackHeliumGameEntranceClick;
- (id)heliumGameTrackParams;
- (id)buttonConfigFrom:(BOOL)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
