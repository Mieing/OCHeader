@interface AWEIMJoinGroupGetGiftsNetwork : NSObject

+ (void)__updateJoinGroupGetGiftsForUid:(id)a0 type:(long long)a1 couponId:(id)a2 completion:(id /* block */)a3;
+ (void)fetchJoinGroupGetGiftsForUid:(id)a0 onlyNeedStatus:(BOOL)a1 completion:(id /* block */)a2;
+ (void)setupJoinGroupGetGiftsForUid:(id)a0 couponId:(id)a1 completion:(id /* block */)a2;
+ (void)revokeJoinGroupGetGiftsForUid:(id)a0 couponId:(id)a1 completion:(id /* block */)a2;

@end
