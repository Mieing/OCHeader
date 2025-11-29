@class AWEAIGCLegacyBusinessContext, NSString;

@interface AWEAIGCLegacyBusinessAfterProcess : NSObject <AWEAIGCLegacyBusinessAfterProcessProtocol>

@property (retain, nonatomic) AWEAIGCLegacyBusinessContext *context;
@property (retain, nonatomic) NSString *didRecorveSyncRenderTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleAfterProcessResponseWith:(id)a0;
- (void)handleAfterProcessAfterRemoveGenericEffect:(id)a0;
- (void)recoverAfterProcessEffectWhenEffectChange:(id)a0;
- (id)syncBindRepoInfoForAfterProcessAndReturnCoverPath;
- (BOOL)handleAfterProcessResponseIsSupportNewAigcPipelineIfNeeded:(id)a0;
- (BOOL)handleAfterProcessWhenFirstRender;
- (void)cancelAfterProcessEffectWhenBackToRecordIfNeedWithExitType:(long long)a0;
- (id)afterProcessModel;
- (BOOL)canUseAfterProcess;
- (void)p_renderAfterProcess;
- (id)loraSyncViewModel;
- (BOOL)handleAfterProcessFromDraftRecover;
- (void)handleAfterProcessAddMusic;
- (BOOL)handleAfterProcessApplyEffectIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)effect;
- (id)repository;

@end
