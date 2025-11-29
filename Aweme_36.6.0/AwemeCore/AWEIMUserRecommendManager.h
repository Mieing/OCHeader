@interface AWEIMUserRecommendManager : NSObject

+ (void)closeUserRecommend;
+ (BOOL)shouldShowUserRecommendWithChatCount:(unsigned long long)a0;
+ (id)userRecommendKey;
+ (BOOL)shouldShowUserRecommend:(unsigned long long)a0;
+ (void)clearUserRecommendCloseFlag;

@end
