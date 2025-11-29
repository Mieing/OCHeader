@class NSString, NSDictionary, BDPUniqueID;

@interface BDPVideoPreloadPluginModel : BDPBasePluginModel

@property (nonatomic) long long taskId;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) long long apiVersion;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *fetcher;
@property (copy, nonatomic) NSString *videoModel;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void).cxx_destruct;
- (id)init;

@end
