@class IRISDataSessionManager, NSString;

@interface TTTrackerContext : NSObject <IRISContext>

@property (retain, nonatomic) IRISDataSessionManager *session;
@property (copy, nonatomic) id /* block */ setRootPathBlock;
@property (copy, nonatomic) id /* block */ setAppIdBlock;
@property (copy, nonatomic) id /* block */ setLoggerBlock;
@property (copy, nonatomic) id /* block */ setSetnryBlock;
@property (retain, nonatomic) id storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sentry;
- (id)featureConfigurationItems;
- (id)logger;
- (long long)logLevel;
- (void).cxx_destruct;
- (id)contextPath;
- (id)init;
- (id)appId;

@end
