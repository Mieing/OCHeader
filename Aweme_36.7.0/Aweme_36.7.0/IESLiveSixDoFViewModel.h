@class HTSLiveRoom, NSMutableArray, HTSLiveVrTransferMessage, NSDictionary, NSString, NSNumber, HTSLiveVrInfo;
@protocol IESLiveSixDoFService, IESLivePlayerProtocol;

@interface IESLiveSixDoFViewModel : NSObject <HTSLiveMessageSubscriber, IESLiveRevenueInteractAction, IESLiveSocialInteractAction, IESLiveSixDoFStore>

@property (retain, nonatomic) id<IESLiveSixDoFService> sixDofService;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) HTSLiveVrInfo *vrInfo;
@property (retain, nonatomic) NSNumber *roomId;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (nonatomic) BOOL isMultiAnchors;
@property (nonatomic) long long originMaterialId;
@property (retain, nonatomic) NSMutableArray *layerStatus;
@property (nonatomic) long long lastProcessedTimeStamp;
@property (nonatomic) BOOL needEndRevenueInteractExecuteFlag;
@property (nonatomic) BOOL isReceiveVRTransferTypeMessage;
@property (retain, nonatomic) HTSLiveVrTransferMessage *waitMessage;
@property (retain, nonatomic) NSDictionary *trackDict;
@property (nonatomic) double startDownLoadTime;
@property (nonatomic) double sendNodesTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL canMessageChange;
@property (nonatomic) BOOL canPKChange;
@property (nonatomic) BOOL canLinkChange;

- (void)didSetAttachingDIContext;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)didStopPlayerWithLayout:(id)a0;
- (void)didRestartPlayerWithLayout:(id)a0;
- (void)processMessages:(id)a0;
- (BOOL)p_enable;
- (void)setupSixDof;
- (void)updateVrVrInfo:(id)a0 player:(id)a1;
- (void)setEffect;
- (void)handleInstantMessage:(id)a0;
- (id)initWithVrInfo:(id)a0 roomId:(id)a1 room:(id)a2 player:(id)a3 trackDict:(id)a4;
- (BOOL)isInPKOrMultiLinkerScene:(id)a0;
- (id)p_layerDic;
- (void)receivedInitSuccess;
- (id)p_player;
- (void)receivedUnicId:(id)a0;
- (id)p_roomid;
- (id)p_originStreamData;
- (id)p_sixDofStreamData;
- (id)p_layout:(id)a0;
- (long long)p_materialId;
- (void)trackShowTimeWithSuccess:(BOOL)a0;
- (void)sendLayerChangeToPlayer;
- (void)addSubscriberForMessage;
- (void)switchSixDofStreamIfNeed;
- (id)p_playerStreamID;
- (id)p_originStreamID;
- (id)p_sixDofStreamID;
- (BOOL)isPlayerLoadOriginStreamData;
- (BOOL)isPlayerLoadSixDofStreamData;
- (void)exchangeStreamDataIfNeedWhenQuitRoom;
- (unsigned long long)p_layerCount;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (long long)p_type;

@end
