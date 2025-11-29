@class NSHashTable, NSString, IESLiveInteractionLayout;
@protocol IESLiveInteractionStage;

@interface IESLiveInteractionStageManager : NSObject <IESLiveInteractionStageManagerProtocol>

@property (retain, nonatomic) id<IESLiveInteractionStage> stage;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (nonatomic) BOOL liveBigPartyStageOutOfStateEnable;
@property (nonatomic) BOOL isAudio;
@property (retain, nonatomic) NSHashTable *stageFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateRoomThemeData:(id)a0;
- (id)stageWithLayout:(id)a0;
- (void)changeStageIfNeededFrom:(id)a0 to:(id)a1 completion:(id /* block */)a2;
- (void)cleanStage;
- (void)changeStageIfNeededTo:(id)a0 completion:(id /* block */)a1;
- (void)loadStageIfNeededFrom:(id)a0 to:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAnchor;
- (void)dealloc;

@end
