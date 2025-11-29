@interface AWEIMSocialEffectManager : NSObject

+ (void)requestSocialInfoWithParams:(id)a0 complete:(id /* block */)a1;
+ (void)requestSocialRelationshipInfoWithParams:(id)a0 complete:(id /* block */)a1;
+ (void)requestSparkInfoWithParams:(id)a0 complete:(id /* block */)a1;
+ (void)requestBurningManInfoWithParams:(id)a0 complete:(id /* block */)a1;
+ (void)requestRandomGroupListWithParams:(id)a0 complete:(id /* block */)a1;
+ (void)requestGroupBaseInfoWithParams:(id)a0 complete:(id /* block */)a1;
+ (void)fetchAchieveServerDatafromServerWithCon:(id)a0 complete:(id /* block */)a1;

@end
