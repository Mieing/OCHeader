@class NSString;

@interface AWESilentPushCleanCacheTask : NSObject <AWESilentPushTaskProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_asyncCleanCache;
+ (id)p_silentPushConfigFromPayload;
+ (id)p_silentPushConfig;
+ (void)execute;


@end
