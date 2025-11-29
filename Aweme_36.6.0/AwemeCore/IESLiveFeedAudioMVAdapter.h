@class NSString, IESLiveMultiOrderSingMVManagerAdapter, IESLiveAudioMVBackgroundManager;
@protocol IESLiveRoomService;

@interface IESLiveFeedAudioMVAdapter : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveMultiOrderSingMVManagerAdapter *mvManagerAdapter;
@property (retain, nonatomic) IESLiveAudioMVBackgroundManager *mvBackgroundManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)handleSEIData:(id)a0;
- (void)onMessageReceivedFromPrestream:(id)a0;
- (void)handleMVSEIDataIfNeed:(id)a0;
- (void)restartMVBackgroundIfNeed;
- (void)setupMVBackgroundDynamicStageView:(id)a0;
- (void)setupMVBackgroundAudioMultiStageView:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
