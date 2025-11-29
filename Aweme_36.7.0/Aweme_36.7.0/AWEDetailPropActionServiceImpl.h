@class AWEDetailPropViewModel, AWEDetailPropTracker, NSString;
@protocol AWEStudioPicTemplateShootEntranceConfig;

@interface AWEDetailPropActionServiceImpl : NSObject <AWEDetailActionService, AWEDetailCreateActionService>

@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;
@property (weak, nonatomic) AWEDetailPropTracker *tracker;
@property (nonatomic, getter=isOnAction) BOOL onAction;
@property (retain, nonatomic) id<AWEStudioPicTemplateShootEntranceConfig> albumInputConfigForPicTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocolClass;

- (void)actionWithActionSender:(id)a0;
- (id)initWithStateContext:(id)a0 tracker:(id)a1;
- (void)actionWithCreateSender:(id)a0;
- (void)actionWithFriendSender:(id)a0;
- (void)actionWithCreateLoraCustomWordSelectPageWith;
- (void)actionWithAICreationSender:(id)a0;
- (void)updateStateContext:(id)a0;
- (void)openAutoCaptionTemplateEditPage;
- (void)actionWithActionIsCreateAI:(BOOL)a0;
- (void)actionWithActionIsCreateAI:(BOOL)a0 isCustomPath:(BOOL)a1;
- (void)actionWithActionIsCreateAI:(BOOL)a0 isCustomPath:(BOOL)a1 isAICreation:(BOOL)a2;
- (void)actionWithActionIsCreateAI:(BOOL)a0 isCustomPath:(BOOL)a1 isAICreation:(BOOL)a2 enterFrom:(id)a3 enterMethod:(id)a4;
- (id)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocol;
- (void)startCinemaFilterFollow:(id)a0;
- (void)handleAIGCStickerIsCreate:(BOOL)a0 isCustomPath:(BOOL)a1 isAICreation:(BOOL)a2 stickerIDArray:(id)a3 musicModel:(id)a4 referString:(id)a5 trackInfo:(id)a6 info:(id)a7;
- (void)p_handleStartShootError:(id)a0;
- (BOOL)shouldEnterOldUGCCustomPageWithIsCustomPath:(BOOL)a0;
- (void)actionWithActionIsCreateAI:(BOOL)a0 isCustomPath:(BOOL)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (void).cxx_destruct;

@end
