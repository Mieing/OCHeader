@interface AWEProfileDataManager : NSObject

+ (void)showOneDayWithUser:(id)a0 completion:(id /* block */)a1;
+ (void)hideOneDayWithUser:(id)a0 completion:(id /* block */)a1;
+ (void)getUserProfileFrequencyInfoWithCompletion:(id /* block */)a0;
+ (void)getUserProfileWithID:(id)a0 completion:(id /* block */)a1;
+ (void)getUserProfileWithID:(id)a0 detailCompletion:(id /* block */)a1;
+ (void)getUserProfileWithID:(id)a0 cacheStrategy:(unsigned long long)a1 cacheMaxAge:(double)a2 extraParams:(id)a3 detailCompletion:(id /* block */)a4;
+ (void)getUserProfileWithID:(id)a0 secUid:(id)a1 cacheStrategy:(unsigned long long)a2 cacheMaxAge:(double)a3 extraParams:(id)a4 detailCompletion:(id /* block */)a5;
+ (void)getUserIDInfoWithUniqueID:(id)a0 completion:(id /* block */)a1;
+ (id)getExpectedSizeInfo;
+ (void)getUserProfileWithID:(id)a0 cacheStrategy:(unsigned long long)a1 cacheMaxAge:(double)a2 detailCompletion:(id /* block */)a3;
+ (id)sourceParam;
+ (BOOL)needPublishVideoStrategyParameter;
+ (BOOL)needRequestPvParams;
+ (void)turnOnPostNotificationWithUserID:(id)a0 completion:(id /* block */)a1;
+ (void)turnOffPostNotificationWithUserID:(id)a0 completion:(id /* block */)a1;
+ (void)setRemarkNameWithUserID:(id)a0 remarkName:(id)a1 params:(id)a2 completion:(id /* block */)a3;

@end
