@class NSArray, NSDictionary, NSString;

@interface BDWebImageTTNetConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL enabledH2;
@property (nonatomic) BOOL enablePingKeepAlive;
@property (nonatomic) unsigned long long pingKeepAliveInterval;
@property (copy, nonatomic) NSArray *pingKeepAliveHosts;
@property (nonatomic) unsigned long long pingProbeTimeout;
@property (nonatomic) BOOL sessionCheckEnabled;
@property (nonatomic) unsigned long long sessionCheckInterval;
@property (copy, nonatomic) NSArray *sessionCheckHosts;
@property (copy, nonatomic) NSDictionary *preconnectURLs;
@property (nonatomic) unsigned long long unusedIdleSocketTimeout;
@property (nonatomic) unsigned long long maxSocketsPerGroup;
@property (nonatomic) unsigned long long usedIdleSocketTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
