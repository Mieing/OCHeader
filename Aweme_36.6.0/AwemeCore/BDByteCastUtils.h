@interface BDByteCastUtils : NSObject

+ (id)customKey;
+ (id)loadBuildInfoFromPlist;
+ (BOOL)isOverseas;
+ (id)getLocalWlanIp;
+ (BOOL)hasIncludeBDLink;
+ (BOOL)hasIncludeDLNA;
+ (BOOL)hasIncludeLebo;
+ (BOOL)hasIncludeCable;
+ (BOOL)hasIncludeByteLink;
+ (BOOL)hasIncludeGoogleCast;
+ (BOOL)hasIncludeBDCloud;
+ (BOOL)hasIncludeDial;
+ (BOOL)hasIncludeSmartView;
+ (BOOL)hasIncludeBDLE;
+ (BOOL)hasIncludeAirPlay;
+ (BOOL)netVPNStatus;
+ (BOOL)netProxyStatus;
+ (BOOL)netHotspotStatus;
+ (long long)getPortFromUrl:(id)a0;
+ (BOOL)ipv4Valid:(id)a0;
+ (id)syncGetTokenWithAction:(id)a0 andParameterDictionary:(id)a1 context:(id)a2;
+ (id)getIpAddressFromUrl:(id)a0;
+ (id)jsonStringFromDic:(id)a0;
+ (id)createSessionConfigWithTimeout:(double)a0;
+ (id)syncGetTokenWithAction:(id)a0 context:(id)a1;
+ (id)stringByEscapingCriticalXMLEntities:(id)a0;
+ (id)stringByEscapingIpString:(id)a0;
+ (id)taskDescriptionWithUrl:(id)a0 maxCount:(unsigned long long)a1 currentIndex:(unsigned long long)a2;
+ (id)removingEmojiFromString:(id)a0;
+ (id)packageName;
+ (id)deviceName;
+ (id)deviceModel;
+ (id)systemVersion;
+ (id)platform;

@end
