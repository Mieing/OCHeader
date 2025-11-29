@class NSString;

@interface WCAdvertiseLogDBItem : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int m_uiLocalId;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (nonatomic) unsigned int m_uiLogId;
@property (retain, nonatomic) NSString *m_nsLogExt;
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
+ (const void *)m_uiLocalId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_uiLocalId;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_m_uiCreateTime;
+ (const void *)m_uiLogId;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_m_uiLogId;
+ (const void *)m_nsLogExt;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_m_nsLogExt;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end
