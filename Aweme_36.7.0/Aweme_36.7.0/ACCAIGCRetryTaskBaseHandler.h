@class NSString;

@interface ACCAIGCRetryTaskBaseHandler : NSObject <ACCAIGCRetryTaskHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)retryType;
+ (void)handleAddChallengeEffectModel:(id)a0 publishViewModel:(id)a1;
+ (void)handleMusicEffectModel:(id)a0 publishViewModel:(id)a1;
+ (void)checkAndBuildRetryPublishViewModelAndStartWithInfo:(id)a0 scene:(unsigned long long)a1;
+ (void)checkRetryInfoAndStartRetryProcess:(id)a0 publishViewModel:(id)a1;
+ (void)transferRetryInfoFromOldRepository:(id)a0 toNewRepository:(id)a1;
+ (void)preloadAILoraIcon;
+ (void)fetchLoraProfileInfoWithTargetModelID:(id)a0 completion:(id /* block */)a1;
+ (BOOL)baseCheckBeforeStartRetryProcessWithInfo:(id)a0;
+ (id)initiateNewRepositoryFromOldRepository:(id)a0;


@end
