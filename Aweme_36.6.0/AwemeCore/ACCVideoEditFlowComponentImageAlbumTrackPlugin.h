@class NSString;
@protocol ACCFeatureComponent;

@interface ACCVideoEditFlowComponentImageAlbumTrackPlugin : ACCFeatureComponent <ACCVideoEditFlowControlSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)notifyEditPageExitWithType:(long long)a0;
- (id)hostComponent;
- (void)bindServices:(id)a0;
- (void)choosePublishPageEntryNameWithExitType:(long long)a0;
- (void)trackToolPerformaceEditNextWithExitType:(long long)a0;
- (void).cxx_destruct;

@end
