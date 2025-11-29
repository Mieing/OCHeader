@interface AWEIMFoldMessageTracker : NSObject

+ (void)trackRiskMessageWaringShow:(id)a0 context:(id)a1;
+ (void)trackRiskMessagePopShow:(id)a0;
+ (void)trackRiskMessagePopClick:(id)a0 position:(long long)a1;
+ (void)p_trackRiskMessageShow:(id)a0 context:(id)a1;
+ (void)p_trackRiskMessageClick:(id)a0 context:(id)a1;
+ (id)linkTypesForMessage:(id)a0;
+ (id)convertRoleIDsToString:(id)a0;
+ (id)p_commonParamsForMessage:(id)a0 context:(id)a1;
+ (void)trackRiskMessageShow:(id)a0 context:(id)a1;
+ (void)trackRiskMessageClick:(id)a0 context:(id)a1;
+ (void)trackChatContactInfoClick:(id)a0 context:(id)a1 highlight:(id)a2;

@end
