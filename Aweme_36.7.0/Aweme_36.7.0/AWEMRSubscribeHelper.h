@interface AWEMRSubscribeHelper : NSObject

+ (id)findSubcategoryOfServiceAccount:(id)a0 subcategoryId:(id)a1;
+ (void)updateSubscribeStatusWithSubcategory:(id)a0 channelIndex:(unsigned long long)a1 subscribeStatus:(long long)a2;
+ (BOOL)isSubcategorySubscribed:(id)a0;
+ (void)associateServiceAccountAndSubcategory:(id)a0;
+ (BOOL)isSubcategoryMultiChannel:(id)a0;
+ (id)findServiceAccountOfSubcategory:(id)a0;
+ (BOOL)isSubcategoryMultiChannelAndSubscribed:(id)a0;
+ (id)subscribeStatusMsgWithSubcategory:(id)a0;
+ (id)findChannelOfSubcategory:(id)a0 channelId:(id)a1;
+ (id)subscribeStatusMsgWithServiceAccount:(id)a0;
+ (void)updateSubscribeStatusWithServiceAccount:(id)a0 subscribeStatus:(long long)a1;
+ (void)updateDisturbStatusWithServiceAccount:(id)a0 disturbStatus:(long long)a1;

@end
