@class NSString, NSData;

@interface MyWCDataItem : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *m_maID;
@property (retain, nonatomic) NSData *m_maBuffer;
@property (nonatomic) int m_codingType;
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
+ (const void *)m_maID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_maID;
+ (const void *)m_maBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_m_maBuffer;
+ (const void *)m_codingType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_m_codingType;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_column_constraint_4:(void *)a0;
+ (void)__wcdb_column_constraint_5:(void *)a0;

- (void).cxx_destruct;

@end
