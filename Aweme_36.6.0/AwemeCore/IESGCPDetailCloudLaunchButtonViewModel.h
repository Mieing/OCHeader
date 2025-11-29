@class IESGCPDetailLaunchDownloadButtonConfig, IESGCPPBGameDetailCloudLaunchButton, NSString;

@interface IESGCPDetailCloudLaunchButtonViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPPBGameDetailCloudLaunchButton *pbModel;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *fullScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *currentThemeConfig;
@property (copy, nonatomic) id /* block */ themeConfigDidChange;
@property (readonly, copy, nonatomic) NSString *gameId;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *mapId;
@property (readonly, copy, nonatomic) NSString *mapName;
@property (readonly, copy, nonatomic) NSString *cgGameid;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSString *buttonSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (void)preloadXplayGameBeforeInit;
- (void)handleButtonDidClick;
- (void)collectLaunchEvent;
- (void)judgeAudioScene:(id)a0;
- (void)openGameWithSchema:(id)a0;
- (id)appendTrackParamsToSchema:(id)a0;
- (BOOL)isIdenticalPlay;
- (id)identicalButtonSmallTitle;
- (BOOL)isInTeamPlay;
- (BOOL)isInteractionPlay;
- (id)identicalButtonBigTitle;
- (id)getDefaultDownloadButtonConfig;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (id)buttonConfigWith:(BOOL)a0;
- (id)handleSchemaJoint:(id)a0;
- (id)_getRequestId;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
