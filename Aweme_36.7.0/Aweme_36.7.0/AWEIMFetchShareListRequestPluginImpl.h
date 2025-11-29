@class NSString;

@interface AWEIMFetchShareListRequestPluginImpl : NSObject <AWEIMFetchShareListRequestPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)defaultRequestWithConfigs:(id)a0;

@end
