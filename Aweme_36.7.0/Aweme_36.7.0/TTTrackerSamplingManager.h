@class NSString, NSArray, TTTrackerConcurrentWrapper;

@interface TTTrackerSamplingManager : NSObject

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL samplingEnabled;
@property (nonatomic) long long version;
@property (nonatomic) unsigned long long capabilities;
@property (retain, nonatomic) NSArray *configPatchIDs;
@property (retain, nonatomic) TTTrackerConcurrentWrapper *pluginForUser;

- (void)updateSamplingConfiguration:(id)a0;
- (BOOL)hitSampling:(id)a0 withParameters:(id)a1;
- (id)samplingVersion;
- (void)setCaliberDeviceID:(id)a0;
- (BOOL)_internalUpdate:(id)a0;
- (BOOL)pluginEnabled;
- (void)setCaliberUserUniqueID:(id)a0;
- (id)filePath;
- (void).cxx_destruct;
- (id)init;
- (void)loadData;
- (id)plugin;

@end
