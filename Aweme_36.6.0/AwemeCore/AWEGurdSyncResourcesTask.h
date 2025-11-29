@class NSString, NSArray, NSDictionary;

@interface AWEGurdSyncResourcesTask : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channelsArray;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) id /* block */ completion;
@property long long state;
@property (copy, nonatomic) NSString *businessDomain;
@property (copy, nonatomic) NSString *SDKVersion;
@property (copy, nonatomic) NSString *resourceVersion;
@property (copy, nonatomic) NSDictionary *customParams;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long pollingPriority;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) BOOL combineRequest;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, nonatomic) BOOL forceRequest;
@property (nonatomic) BOOL useGurdSettingsIfNeeded;
@property (nonatomic) long long modelActivePolicy;
@property (nonatomic) BOOL retryDownload;
@property (nonatomic, getter=isColdLaunch) BOOL coldLaunch;

+ (id)taskWithAccessKey:(id)a0 channelsArray:(id)a1 completion:(id /* block */)a2;
+ (id)taskWithAccessKey:(id)a0 groupName:(id)a1 channelsArray:(id)a2 completion:(id /* block */)a3;
+ (id)taskWithAccessKey:(id)a0 groupName:(id)a1 completion:(id /* block */)a2;

- (BOOL)isEqualToTask:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
