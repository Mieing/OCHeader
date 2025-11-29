@class NSString;
@protocol ACCFeatureComponent, IESServiceProvider;

@interface ACCPropPickerComponentUpdatePickerPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hostComponent;
- (void)bindServices:(id)a0;
- (void)bindToComponent:(id)a0;
- (void)bindUpdatePicker;
- (void).cxx_destruct;

@end
