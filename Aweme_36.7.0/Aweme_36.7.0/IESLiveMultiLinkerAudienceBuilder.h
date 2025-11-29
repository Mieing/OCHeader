@class NSString, IESLiveRevenueInteractSEIMonitor, IESLiveLinkMicSEIParserResult;

@interface IESLiveMultiLinkerAudienceBuilder : NSObject <HTSLiveMessageSubscriber, IESLiveDataSyncDelegate, IESLiveSEIListener, IESLiveInteractiveLinkServiceDelegate>

@property (nonatomic) BOOL isInMultiLinkerSEILayout;
@property (nonatomic) BOOL hasHideFullScreenButton;
@property (nonatomic) BOOL hasDisableVR;
@property (retain, nonatomic) IESLiveLinkMicSEIParserResult *lastMultiLinkerSEI;
@property (retain, nonatomic) IESLiveLinkMicSEIParserResult *lastSEI;
@property (retain, nonatomic) IESLiveRevenueInteractSEIMonitor *seiMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (unsigned long long)typeToCheckIfLaterThanWhenReuseSEI;
- (void)bindAction;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)onReceivedLinkEnterMessage:(id)a0;
- (BOOL)isInMultiGameSEILayout;
- (void)trackLayoutLandscapeDisplay;
- (void)getReadyToMultiLinker;
- (void)setupInPCMultiLinker;
- (void)transfromNormalToMultiLink;
- (BOOL)isMultiLinkerSEI:(id)a0;
- (void)trackConnectionWatchDuration:(id)a0;
- (void)transfromMultiLinkToNormal;
- (void)startListenSEI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)messageReceived:(id)a0;

@end
