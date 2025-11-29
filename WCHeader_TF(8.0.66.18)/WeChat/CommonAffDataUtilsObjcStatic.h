@interface CommonAffDataUtilsObjcStatic : NSObject

+ (void)followFinderAccount:(id)a0 isCancel:(BOOL)a1 tingItemData:(id)a2 requestScene:(long long)a3 extraInfo:(id)a4 callback:(id /* block */)a5;
+ (void)getBrandContactInfo:(id)a0 callback:(id /* block */)a1;
+ (void)getContactInfo:(id)a0 callback:(id /* block */)a1;
+ (void)getContactInfoFromHash:(id)a0 callback:(id /* block */)a1;
+ (void)getFinderContactInfo:(id)a0 callback:(id /* block */)a1;
+ (void)getPoiInfo:(id /* block */)a0;
+ (void)getWxUsername:(id /* block */)a0;
+ (void)onFinderFeedLike:(id)a0 nonceId:(id)a1 actToLike:(BOOL)a2 realName:(BOOL)a3 callback:(id /* block */)a4;
+ (void)requestMediaInfo:(id)a0 callback:(id /* block */)a1;
+ (id)getContactByUsername:(id)a0;
+ (id)genAsyncResult:(long long)a0 errMsg:(id)a1;
+ (id)getWxUsernameSync;

@end
