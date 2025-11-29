@class NSString, NSDictionary;

@interface IESGurdLoadResourcesParams : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) NSString *SDKVersion;
@property (copy, nonatomic) NSDictionary *customParams;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) long long options;

- (id)toFetchParams;
- (void).cxx_destruct;

@end
