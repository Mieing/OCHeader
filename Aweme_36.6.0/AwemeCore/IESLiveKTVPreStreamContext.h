@class IESLiveKTVCommonStore, IESLiveMultiKTVStore, IESLiveMultiAudioKTVContainerView, IESLivePartyKTVStageController;

@interface IESLiveKTVPreStreamContext : NSObject

@property (retain, nonatomic) IESLiveMultiKTVStore *store;
@property (weak, nonatomic) IESLiveMultiAudioKTVContainerView *previewContainer;
@property (retain, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (weak, nonatomic) IESLivePartyKTVStageController *previewPartyKTVController;

- (void).cxx_destruct;

@end
