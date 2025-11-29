@interface AWEUserRecommendCardConfig : NSObject

+ (id)cardControllerClassesNeedRegisterWithFeedType:(long long)a0;
+ (BOOL)enableRecommendCardRefactor;
+ (void)configCanShowSlideUpHintWithBusinessID:(id)a0 dataSource:(id)a1 hasMore:(BOOL)a2 configBlock:(id /* block */)a3;

@end
