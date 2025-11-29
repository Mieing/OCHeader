@class ACCCameraSubscription, NSString;

@interface ACCPicTemplatePanelViewModel : NSObject <ACCPicTemplatePanelService, ACCEditPicTemplateServiceSubscriber>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applySuccessWithTemplate:(id)a0 projectUUID:(id)a1;
- (void)refreshCoverWithProject:(id)a0;
- (void)addSubScribier:(id)a0;
- (void)nofitySubScriberDidSelectedTemplate:(id)a0;
- (void)nofitySubScriberDidRemoveTemplate;
- (void).cxx_destruct;

@end
