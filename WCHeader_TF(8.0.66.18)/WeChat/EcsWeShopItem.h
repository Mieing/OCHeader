@class NSString, NSData;

@interface EcsWeShopItem : NSObject <WeChat.FTSRowModel, WCTTableCoding>

@property (nonatomic, readonly) NSString *userName;
@property (nonatomic) long long localId;
@property (retain, nonatomic) NSString *shopAppId;
@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) NSString *shopLogoUrl;
@property (retain, nonatomic) NSString *shopRIconLightUrl;
@property (retain, nonatomic) NSString *shopRIconDarkUrl;
@property (nonatomic) unsigned int shopStatus;
@property (nonatomic) unsigned int shopTagType;
@property (nonatomic) unsigned long long shopTagModifyTime;
@property (retain, nonatomic) NSData *jumpInfoData;
@property (nonatomic) long long updateSeq;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shopAppIdFromTophitsKey:(id)a0;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_localId;
+ (const void *)shopAppId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_shopAppId;
+ (const void *)shopName;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_shopName;
+ (const void *)shopLogoUrl;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_shopLogoUrl;
+ (const void *)shopRIconLightUrl;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_shopRIconLightUrl;
+ (const void *)shopRIconDarkUrl;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_shopRIconDarkUrl;
+ (const void *)shopStatus;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_shopStatus;
+ (const void *)shopTagType;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_shopTagType;
+ (const void *)shopTagModifyTime;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_shopTagModifyTime;
+ (const void *)jumpInfoData;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_jumpInfoData;
+ (const void *)updateSeq;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_updateSeq;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (void)__wcdb_column_constraint_12:(void *)a0;
+ (void)__wcdb_index_13:(void *)a0;
+ (void)__wcdb_index_14:(void *)a0;

@end
