@interface BDPBusinessHeader : NSObject

+ (id)processHeader:(id)a0 URL:(id)a1 uniqueID:(id)a2 refererPolicyFrom:(long long)a3;
+ (id)processHeader:(id)a0 URL:(id)a1 needAppendHostCookie:(BOOL)a2 needAppendSandboxCookie:(BOOL)a3 uniqueID:(id)a4;
+ (void)processResponse:(id)a0 URL:(id)a1 uniqueID:(id)a2;
+ (id)serviceReferer:(id)a0 version:(id)a1;
+ (id)processHeader:(id)a0 URL:(id)a1 needAppendHostCookie:(BOOL)a2 needAppendSandboxCookie:(BOOL)a3 uniqueID:(id)a4 refererPolicyFrom:(long long)a5;
+ (id)processHeader:(id)a0 URL:(id)a1 needAppendHostCookie:(BOOL)a2 uniqueID:(id)a3;
+ (id)serviceReferer:(id)a0 common:(id)a1;
+ (BOOL)needSetResponseCookie;
+ (void)processResponseDirectly:(id)a0 URL:(id)a1 uniqueID:(id)a2;
+ (id)processHeader:(id)a0 URL:(id)a1 uniqueID:(id)a2;

@end
