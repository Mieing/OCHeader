@class IESGCPDetailCloudLaunchButtonStyle, IESGCPPBGameDetailCloudLaunchButton, NSString;

@interface IESGCPDetailCloudLaunchButtonV4ViewModel : IESGCPDetailUniversalButtonViewModel

@property (retain, nonatomic) IESGCPPBGameDetailCloudLaunchButton *pbModel;
@property (readonly, nonatomic) IESGCPDetailCloudLaunchButtonStyle *cloudButtonStyle;
@property (readonly, copy, nonatomic) NSString *gameId;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *mapId;
@property (readonly, copy, nonatomic) NSString *mapName;
@property (readonly, copy, nonatomic) NSString *cgGameid;

- (void)preloadXplayGameBeforeInit;
- (void)handleButtonDidClick;
- (void)parseButtonStyle;
- (id)parseButtonStyleWithContent:(id)a0;
- (void)collectLaunchEvent;
- (void)judgeAudioScene:(id)a0;
- (void)openGameWithSchema:(id)a0;
- (id)appendTrackParamsToSchema:(id)a0;
- (id)getRequestId;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
