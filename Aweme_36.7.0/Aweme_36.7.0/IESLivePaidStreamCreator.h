@class NSString, NSHashTable, IESLivePaidStreamParameterCreator, IESLivePaidStreamPaidPanelManager;
@protocol IESLiveRoomService;

@interface IESLivePaidStreamCreator : NSObject <IESLivePaidStreamCreatorProtocol>

@property (retain, nonatomic) NSHashTable *externalPlugins;
@property (readonly, weak, nonatomic) id<IESLiveRoomService> room;
@property (readonly, weak, nonatomic) IESLivePaidStreamParameterCreator *parameterCreator;
@property (readonly, weak, nonatomic) IESLivePaidStreamPaidPanelManager *paidPanelManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)creatorShouldActive:(id)a0;

- (id)extraTrackParams;
- (void)handlePaidLiveDataMessage:(id)a0;
- (long long)paidScene;
- (id)dataInjSceneID;
- (id)dataInjBusinessID;
- (id)customPlugins;
- (void)paidStreamCreate:(unsigned long long)a0 paidObject:(id)a1;
- (id)currentPaidStream;
- (void)paidStreamUnmount;
- (BOOL)shouldCreateWhenEnterRoomFromSubCamera;
- (id)initWithRoom:(id)a0 parameterCreator:(id)a1 paidPanelManager:(id)a2 externalPlugins:(id)a3;
- (id)basicPlugins;
- (id)initWithRoom:(id)a0 parameterCreator:(id)a1 externalPlugins:(id)a2;
- (void).cxx_destruct;
- (id)allPlugins;

@end
