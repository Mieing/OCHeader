@class NSString;
@protocol ACCEditServiceProtocol;

@interface ACCEditPropComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCDraftResourceRecoverProtocol>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)a0;
+ (void)updateWithDownloadedEffects:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;

@end
