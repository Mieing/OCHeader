@class IESLivePopularityGemInterface, HTSLiveToolbarItem;

@interface IESLivePopularityGemFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLivePopularityGemInterface *popularGemInterface;
@property (retain, nonatomic) HTSLiveToolbarItem *audienceButtonItem;

- (void)componentBindService;
- (void)componentMount;
- (void)remoteRoomDataReady:(id)a0;
- (void)onExpandGroupShow:(BOOL)a0;
- (void)didUpdateRoom:(id)a0;
- (void)loadMoreToolItem;
- (BOOL)needShowWithABStetting;
- (id)iconImageUrlName;
- (BOOL)shouldShowPopularityGemRedDot;
- (void)tapToolBarItem;
- (id)popularityGemRedDotKey;
- (void)_showLivePopularGem;
- (void).cxx_destruct;

@end
