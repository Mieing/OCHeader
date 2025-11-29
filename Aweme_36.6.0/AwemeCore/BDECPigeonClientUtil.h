@interface BDECPigeonClientUtil : NSObject

+ (BOOL)validateResponse:(id)a0;
+ (id)messageFromResponse:(id)a0;
+ (id)generateFullURLWithPath:(id)a0 belongeClient:(id)a1;
+ (id)generateFullURLWithoutPrefixWithPath:(id)a0 belongeClient:(id)a1;
+ (id)kvStoreWithCustomBizID:(id)a0;
+ (id)generateFullURLWithPath:(id)a0 belongeClient:(id)a1 needAddPathPrefix:(BOOL)a2;
+ (id)convertBizConversationIDToIMCloudConversationID:(id)a0 inbox:(int)a1;
+ (long long)responseCodeFromResp:(id)a0;

@end
