@class NSArray, NSString;

@interface AWEPluginTrackerCustomImpl : NSObject <BDPTrackerPluginDelegate>

@property (copy, nonatomic) NSArray *commonParamKeys;
@property (copy, nonatomic) NSArray *localCommonParamKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

@end
