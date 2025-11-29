@class ACCVideoEditChallengeBindComponent, NSString;
@protocol ACCFeatureComponent;

@interface ACCChallengeBindComponentEditFlowPlugin : NSObject <ACCVideoEditFlowControlSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCVideoEditChallengeBindComponent *hostComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)willDirectPublishWithEditFlowService:(id)a0;
- (void)dataClearForBackup:(id)a0;
- (void)onEnterPublishWithEditFlowService:(id)a0;
- (void)willExitEditModeWithService:(id)a0;
- (void)bindServices:(id)a0;
- (void)publishServiceWillStart;
- (void).cxx_destruct;

@end
