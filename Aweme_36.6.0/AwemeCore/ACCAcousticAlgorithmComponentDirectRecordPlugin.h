@class NSString, ACCAcousticAlgorithmComponent;
@protocol ACCRecordSwitchModeService, ACCFeatureComponent, ACCMicrophoneService;

@interface ACCAcousticAlgorithmComponentDirectRecordPlugin : NSObject <ACCRecordSwitchModeServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCAcousticAlgorithmComponent *hostComponent;
@property (retain, nonatomic) id<ACCMicrophoneService> microphoneService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

@end
