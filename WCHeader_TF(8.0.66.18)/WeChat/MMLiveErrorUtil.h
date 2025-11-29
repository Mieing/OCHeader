@interface MMLiveErrorUtil : NSObject

+ (id)createLiveErrorWithDomain:(id)a0 errType:(long long)a1 errCode:(long long)a2 errMsg:(id)a3;
+ (id)createLiveErrorWithDomain:(id)a0 errCode:(long long)a1 errMsg:(id)a2;
+ (id)createLiveErrorWithDomain:(id)a0 errCode:(long long)a1 errMsg:(id)a2 extraInfo:(id)a3;
+ (id)getDefaultDisplayErrorMessageByErrCode:(long long)a0;
+ (BOOL)isLiveBanByPolicyWith:(long long)a0;
+ (id)getDisplayErrorMessageForFinderLiveByErrCode:(long long)a0;
+ (id)getDisplayErrorMessageForConnectMicByErrCode:(long long)a0;
+ (BOOL)isAntiSpamErrorCodeForConnectMicValid:(long long)a0;

@end
