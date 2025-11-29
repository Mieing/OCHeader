@class NSString;

@interface TMSettings : NSObject <TimonConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sdkConfig;
+ (void)syncConfig;
+ (void)registerConfigUpdatedBlock:(id /* block */)a0;
+ (id)encryptionListConfig;
+ (id)rulerConfig;
+ (id)sensitivePathConfig;
+ (id)timonLogConfig;
+ (id)settings;


@end
