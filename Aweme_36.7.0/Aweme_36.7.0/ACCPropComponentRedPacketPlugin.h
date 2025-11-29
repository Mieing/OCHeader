@class ACCPropComponentV2, NSString;
@protocol ACCRecordPropService, ACCFeatureComponent;

@interface ACCPropComponentRedPacketPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCPropComponentV2 *hostComponent;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)bindToComponent:(id)a0;
- (void).cxx_destruct;

@end
