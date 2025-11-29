@class IESLiveBigPartyPreStreamKTVIndicatorViewModel, IESLiveKTVMidiStore, IESLiveKTVFeedView, NSString, IESLiveBigPartyPreStreamController, IESLiveVideoChorusStore;
@protocol IESLiveRoomService, IESLiveBigPartyPreStreamDataSource, IESLiveKTVSendEventService;

@interface IESLiveKTVPreStreamController : NSObject <IESLiveSEIListener, IESLiveKTVPreStreamDataSource, IESLiveStreamInteractVideoChorusElementActions, IESLiveKTVPreStreamProtocol>

@property (retain, nonatomic) IESLiveKTVFeedView *ktvFeedView;
@property (retain, nonatomic) IESLiveBigPartyPreStreamKTVIndicatorViewModel *ktvIndicatorViewModel;
@property (retain, nonatomic) IESLiveKTVMidiStore *midiStore;
@property (retain, nonatomic) IESLiveVideoChorusStore *videoChorusStore;
@property (nonatomic) BOOL isInRoom;
@property (nonatomic) BOOL couldReceiveBackupSEI;
@property (nonatomic) BOOL audienceVideoChorusEnable;
@property (weak, nonatomic) id<IESLiveKTVSendEventService> sendEventService;
@property (copy, nonatomic) NSString *enterFromMergeTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) double gusetWidth;
@property (nonatomic) double gridY;
@property (weak, nonatomic) id<IESLiveBigPartyPreStreamDataSource> dataSource;
@property (weak, nonatomic) IESLiveBigPartyPreStreamController *bigPartyController;

- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (BOOL)enableBackupSEI;
- (void)smoothEnterRoom;
- (void)interactMSequenceDidSwitchWithRoom:(id)a0;
- (void)smoothExitRoom;
- (void)stopAllAnimation;
- (void)roomDidEnd;
- (void)playerDidReset;
- (void)updateGuestWidth;
- (void)startAnimationIfNeed;
- (void)preloadElement:(id)a0;
- (id)indicatorViewModel;
- (void)removeKTVView;
- (void)videoChorusDidStop;
- (void)videoChorusDidStart;
- (void)subscribeLayoutAndListChange;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)prepareForReuse;
- (void)setup;
- (void)updateModel:(id)a0;

@end
