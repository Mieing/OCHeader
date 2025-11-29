@interface AWEPublishVideoSyncItemConfigHelper : NSObject

+ (Class)aAWEStudioGlobalConfigClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;

- (id)aAWEStudioGlobalConfig;
- (BOOL)isJX;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)enableVideoSync;

@end
