@class NSString, NSMutableDictionary, IESLiveComponentDynamicSyncConfig;

@interface IESLiveComponentSyncManager : NSObject <IESLiveComponentLifeCycleNotifier, IESLiveComponentSyncProtocol>

@property (retain, nonatomic) NSMutableDictionary *innerTaskGroupMap;
@property (retain, nonatomic) NSMutableDictionary *taskGroupMap;
@property (retain, nonatomic) IESLiveComponentDynamicSyncConfig *syncConfigModel;
@property (copy, nonatomic) id /* block */ previewBlock;
@property (copy, nonatomic) id /* block */ finishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerGroupPreviewBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (void)registerTaskWithID:(id)a0;
- (void)subscribeStateTaskID:(id)a0 groupID:(id)a1 callback:(id /* block */)a2;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (void)setUpSyncConfigModel:(id)a0;
- (id)syncGroupWithID:(id)a0 create:(BOOL)a1;
- (void)setUpConfig:(id)a0;
- (void)setUpTaskGroup;
- (id)syncGroupWithTaskID:(id)a0 create:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)finishedTaskWithID:(id)a0;

@end
