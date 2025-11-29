@class NSString;
@protocol ACCFeatureComponent;

@interface ACCVideoEditStickerComponentEditFlowPlugin : NSObject <ACCVideoEditFlowControlSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

@end
