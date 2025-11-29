@interface AWEPayCommonUtil : NSObject

+ (BOOL)isPPEEnv;
+ (double)currentServerTime;
+ (id)currentNetType;
+ (id)awe_redPacketInfo:(id)a0;
+ (void)setAwe_redPacketInfo:(id)a0 msg:(id)a1;
+ (id)getDisplayNameWithUid:(id)a0 secUid:(id)a1 conversationId:(id)a2;
+ (id)defaultRedPacketTitleWithFansCreatorStyle:(BOOL)a0;
+ (long long)followStatusWithUserId:(id)a0;
+ (void)transferToUserProfileWitUserID:(id)a0;
+ (BOOL)isBOEEvn;
+ (id)boeSuffix;
+ (BOOL)awepay_isAuthorService:(id)a0;
+ (void)userIDWithSecUserID:(id)a0 conversationId:(id)a1 completion:(id /* block */)a2;
+ (id)sendSchemaParams;
+ (id)getUserModelWithUid:(id)a0 secUid:(id)a1;
+ (long long)appVersionCom:(long long)a0;
+ (void)processRouterWith:(id)a0;
+ (void)openSchema:(id)a0 callback:(id /* block */)a1;
+ (void)saveCJPayCache:(id)a0 key:(id)a1;
+ (id)merchantIDWithProductType:(unsigned long long)a0;
+ (void)transferToUrlString:(id)a0;
+ (void)showCJPayLoading;
+ (void)hideCJPayLoading;
+ (void)showCJPaySecurityLoading;
+ (BOOL)isVersionInMinVer:(long long)a0 maxVer:(long long)a1;

@end
