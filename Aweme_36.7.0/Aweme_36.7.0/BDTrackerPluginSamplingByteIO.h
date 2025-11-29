@class NSString, BDTrackerSamplingCaliber, NSArray;

@interface BDTrackerPluginSamplingByteIO : NSObject <BDTrackerPluginSampling>

@property (copy, nonatomic) NSString *samplingVersion;
@property (retain, nonatomic) BDTrackerSamplingCaliber *caliber;
@property (retain, nonatomic) NSArray *samplingUnits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginVersion;
+ (id)plugin;

@end
