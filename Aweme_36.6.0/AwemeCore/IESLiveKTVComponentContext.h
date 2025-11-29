@class IESLivePartyKTVStageContainerView, HTSLiveAudioBGData, IESLiveKTVCommonStore, UIView, IESLiveCombineSubject;
@protocol IESLiveRoomService, IESHYContainerProtocol;

@interface IESLiveKTVComponentContext : NSObject

@property (retain, nonatomic) IESLivePartyKTVStageContainerView *container;
@property (retain, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveAudioBGData *theme;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) BOOL isAssignedLeader;
@property (nonatomic) BOOL needChorusMidiRTSMsg;
@property (weak, nonatomic) UIView<IESHYContainerProtocol> *seatLynxView;
@property (retain, nonatomic) IESLiveCombineSubject *chorusStageSubject;
@property (nonatomic) long long stageLevel;

- (id)stageLevelTrack;
- (void).cxx_destruct;

@end
