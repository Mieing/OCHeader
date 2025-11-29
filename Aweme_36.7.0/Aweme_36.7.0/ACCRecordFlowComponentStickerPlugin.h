@class NSString, ACCRecordFlowComponent;
@protocol ACCFeatureComponent, IESServiceProvider;

@interface ACCRecordFlowComponentStickerPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCRecordFlowComponent *hostComponent;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (BOOL)couldShowItems;
- (void).cxx_destruct;

@end
