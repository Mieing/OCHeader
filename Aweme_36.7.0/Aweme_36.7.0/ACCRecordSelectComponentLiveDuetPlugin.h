@class NSString, ACCRecordSelectPropComponent;
@protocol ACCFeatureComponent;

@interface ACCRecordSelectComponentLiveDuetPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCRecordSelectPropComponent *hostComponent;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLiveDuetPhotoSession:(id)a0;

- (void)bindServices:(id)a0;
- (void)bindToComponent:(id)a0;
- (void).cxx_destruct;

@end
