@class IESGCPPBMiniPlayMeta, IESGCPDetailLaunchDownloadButtonConfig, NSString;

@interface IESGCPDetailMiniPlayButtonViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBMiniPlayMeta *miniPlayMeta;
@property (readonly, nonatomic) IESGCPDetailLaunchDownloadButtonConfig *buttonConfig;
@property (readonly, nonatomic) NSString *gameId;
@property (readonly, nonatomic) NSString *gameName;

- (void)handleButtonDidClick;
- (void)handleButtonDidShow;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
