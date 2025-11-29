@class NSString, ACCVideoEditStickerComponent;
@protocol ACCFeatureComponent;

@interface ACCEditStickerComponentImageAlbumEditPlugin : NSObject <ACCVideoEditFlowControlSubscriber, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCVideoEditStickerComponent *hostComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)willSwitchImageAlbumEditModeWithEditFlowService:(id)a0;
- (void)bindToComponent:(id)a0;
- (void).cxx_destruct;

@end
