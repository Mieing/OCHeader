@class NSString;

@interface WARenderCacheInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int debugType;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *pagePath;
@property (retain, nonatomic) NSString *pubVersion;
@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic) unsigned int lastAccessTime;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)debugType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_debugType;
+ (const void *)appVersion;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_appVersion;
+ (const void *)pagePath;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_pagePath;
+ (const void *)pubVersion;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_pubVersion;
+ (const void *)cacheSize;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_cacheSize;
+ (const void *)lastAccessTime;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_lastAccessTime;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_8:(void *)a0;
+ (void)__wcdb_table_constraint_9:(void *)a0;
+ (void)__wcdb_table_constraint_10:(void *)a0;
+ (void)__wcdb_table_constraint_11:(void *)a0;

- (void).cxx_destruct;

@end
