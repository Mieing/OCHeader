@class NSString, PublicWifiCache, PublicWifiPageInfo;

@interface APBase : MMObject <WCTTableCoding> {
    NSString *errMsg;
}

@property (retain, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSString *mac;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) int state;
@property (nonatomic) int actionCode;
@property (copy, nonatomic) NSString *bannerText;
@property (copy, nonatomic) NSString *showUrl;
@property (nonatomic) double expiredTime;
@property (weak, nonatomic) PublicWifiCache *cache;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *qrCode;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *checkUrl;
@property (nonatomic) unsigned int protocolType;
@property (copy, nonatomic) NSString *sessionKey;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) unsigned int retcode;
@property (copy, nonatomic) NSString *retMsg;
@property (retain, nonatomic) PublicWifiPageInfo *pageInfo;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)ssid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_ssid;
+ (const void *)mac;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_mac;
+ (const void *)opCode;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_opCode;
+ (const void *)actionCode;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_actionCode;
+ (const void *)bannerText;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_bannerText;
+ (const void *)showUrl;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_showUrl;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_expiredTime;
+ (const void *)qrCode;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_qrCode;
+ (const void *)mpUrl;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_mpUrl;
+ (const void *)mid;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_mid;
+ (const void *)checkUrl;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_checkUrl;
+ (const void *)protocolType;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_protocolType;
+ (const void *)retcode;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_retcode;
+ (const void *)retMsg;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_retMsg;
+ (void)__wcdb_column_constraint_14:(void *)a0;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)cancel;
- (BOOL)canStartWithCurrSSID:(id)a0;
- (void).cxx_destruct;

@end
