@class IESGCPPBGameDetailMiniGameLaunchButton, NSString;

@interface IESGCPDetailLaunchButtonV4ViewModel : IESGCPDetailUniversalButtonViewModel

@property (retain, nonatomic) IESGCPPBGameDetailMiniGameLaunchButton *pbModel;
@property (readonly, nonatomic) NSString *gameID;
@property (readonly, nonatomic) NSString *gameName;

- (void)handleButtonDidClick;
- (void)parseButtonStyle;
- (void)trackHeliumGameEntranceShow;
- (void)trackHeliumGameEntranceClick;
- (id)heliumGameTrackParams;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)buttonStyle;

@end
