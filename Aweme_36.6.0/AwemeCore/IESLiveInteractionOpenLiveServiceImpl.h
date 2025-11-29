@class NSString, NSMapTable;

@interface IESLiveInteractionOpenLiveServiceImpl : NSObject <IESLiveGuideOpenLiveAdditionalEvent, IESLiveInteractionOpenLiveService>

@property (retain, nonatomic) NSMapTable *queryKVResultCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)appendOpenLiveRequestParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldIgnoreInteractionLandingWithGuideModel:(id)a0;
- (BOOL)queryHasEverEnteredOpenLiveGuidePageFromGroupLiveEntranceAfterAppInstalledWithNewValue:(id)a0;
- (void)setHasEverEnteredOpenLiveGuidePageFromGroupLiveEntranceAfterAppInstalled:(BOOL)a0;
- (BOOL)hasEverEnteredOpenLiveGuidePageFromGroupLiveEntranceAfterAppInstalled;
- (void).cxx_destruct;
- (id)init;

@end
