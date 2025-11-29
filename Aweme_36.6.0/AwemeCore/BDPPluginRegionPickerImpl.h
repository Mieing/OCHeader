@class NSString, BDPRegionPickerView;

@interface BDPPluginRegionPickerImpl : NSObject <BDPRegionPickerPluginDelegate>

@property (retain, nonatomic) BDPRegionPickerView *pickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

@end
