@class BDPGameSceneRecordInfo, NSString;

@interface BDPPluginSceneEvent_HG : BDPBridgeInstancePlugin <BDPBootLifeCycleMessage>

@property (retain, nonatomic) BDPGameSceneRecordInfo *sceneRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMessage;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)pr_viewAbnormalDetectionWithUniqueID:(id)a0 sceneName:(id)a1;
- (void)pr_recordSceneChangeWithSceneName:(id)a0 eventName:(id)a1 eventTime:(long long)a2 uniqueID:(id)a3;
- (id)pr_trackerKeyProcessWithEventName:(id)a0;
- (void)reportSceneEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
