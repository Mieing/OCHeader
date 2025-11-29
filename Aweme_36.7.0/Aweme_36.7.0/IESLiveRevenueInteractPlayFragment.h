@class IESLiveRevenueInteractPlayBuilder, NSString, IESLiveRevenueInteractPlayStateManager, IESLiveRevenueInteractPlayInstance, GPBMessage, IESLiveLinkMicListResponse;

@interface IESLiveRevenueInteractPlayFragment : IESLiveRoomComponent <IESLiveRevenueInteractInnerAction, HTSLiveMessageSubscriber, IESLiveRevenueInteractPlayStateAction>

@property (retain, nonatomic) IESLiveRevenueInteractPlayBuilder *builder;
@property (retain, nonatomic) IESLiveRevenueInteractPlayInstance *instance;
@property (nonatomic) BOOL hasInstance;
@property (retain, nonatomic) IESLiveRevenueInteractPlayStateManager *stateManager;
@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) GPBMessage *cachedPlayMessage;
@property (retain, nonatomic) IESLiveLinkMicListResponse *cachedListResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)didFetchEnterRoomListResult:(id)a0;
- (void)didReadyToPlay:(unsigned long long)a0;
- (void)didReceivedLinkedUserLeaved:(id)a0;
- (void)onInteractionEnd:(unsigned long long)a0;
- (void)didChangeStateFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)destroyInstance;
- (BOOL)needCacheDataWithDataType:(id)a0;
- (BOOL)needLoadInstanceWithMessage:(id)a0;
- (void)loadInstanceWithData:(id)a0;
- (BOOL)isRevenueLinkerScene;
- (void)dispatchRoomMessageWithDisplayText:(id)a0 content:(id)a1;
- (void)showFinishResultIfNeed:(id)a0;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)provider;
- (void)messageReceived:(id)a0;
- (long long)componentPriority;

@end
