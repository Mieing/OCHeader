@interface WCBrandServiceUtil : NSObject

+ (BOOL)isBrandServiceBoxAccount:(id)a0;
+ (id)getArrBrandServiceSessionWithLimit:(unsigned int)a0;
+ (id)getRecentBrandServiceInfoWithLimit:(unsigned int)a0;
+ (id)transerSessionInfo2AccountInfo:(id)a0;
+ (id)getContactByUsername:(id)a0;
+ (id)getDigestContentWithMsgWrap:(id)a0 includeNickName:(BOOL)a1;
+ (id)getDigestWithMsgWrap:(id)a0;
+ (id)getDigestWithMsgWrapNoNickName:(id)a0;
+ (id)transferPriceToText:(long long)a0;

@end
