@interface AFDRecommendToFriendDouyinJXService : NSObject

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAFDServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAFDServiceDOUYINJXAdapter;
- (BOOL)supportGuideRecommendTagForActionType:(unsigned long long)a0 context:(id)a1;
- (BOOL)isForbidRecommendWithParam:(id)a0;

@end
