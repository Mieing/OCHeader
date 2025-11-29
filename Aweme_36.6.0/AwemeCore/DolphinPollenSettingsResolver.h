@class NSString, DolphinPollenFeatureProducer;

@interface DolphinPollenSettingsResolver : NSObject <DolphinPollenResolveProtocol>

@property (retain, nonatomic) DolphinPollenFeatureProducer *featureProducer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
