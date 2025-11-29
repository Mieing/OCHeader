@class NSString, AWEEdgeAIWrapper;
@protocol ACCRecordPropService, ACCFeatureComponent, IESServiceProvider;

@interface ACCPropPickerComponentPreloadPropPanelPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) AWEEdgeAIWrapper *edgeai;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
