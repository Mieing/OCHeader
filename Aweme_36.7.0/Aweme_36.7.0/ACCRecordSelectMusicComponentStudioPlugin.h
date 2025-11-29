@class NSString, ACCRecordSelectMusicComponent;
@protocol ACCFeatureComponent;

@interface ACCRecordSelectMusicComponentStudioPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, weak, nonatomic) ACCRecordSelectMusicComponent *hostComponent;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
