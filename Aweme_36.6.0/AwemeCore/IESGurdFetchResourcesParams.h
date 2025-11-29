@class NSString, NSArray, NSDictionary, NSDate;

@interface IESGurdFetchResourcesParams : NSObject {
    NSString *_identity;
}

@property (readonly, copy, nonatomic) NSString *identity;
@property (retain, nonatomic) NSDate *createTime;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channels;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *SDKVersion;
@property (copy, nonatomic) NSString *resourceVersion;
@property (copy, nonatomic) NSString *businessDomain;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSDictionary *targetVersionsDictionary;
@property (nonatomic) BOOL forceRequest;
@property (nonatomic) BOOL disableThrottle;
@property (nonatomic) long long pollingPriority;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) long long modelActivePolicy;
@property (nonatomic) BOOL retryDownload;
@property (nonatomic, getter=isColdLaunch) BOOL coldLaunch;
@property (nonatomic) BOOL requestWhenHasLocalVersion;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)init;

@end
