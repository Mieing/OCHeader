@class NSString;

@interface WCDeviceAirKissReccord : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *m_key;
@property (retain, nonatomic) NSString *m_data;
@property (nonatomic) unsigned int IntRes1;
@property (nonatomic) unsigned int IntRes2;
@property (retain, nonatomic) NSString *StrRes1;
@property (retain, nonatomic) NSString *StrRes2;
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
+ (const void *)m_key;
+ (const void *)__wcdb_synthesize_16:(void *)a0;
+ (id)swift_m_key;
+ (const void *)m_data;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (id)swift_m_data;
+ (const void *)IntRes1;
+ (const void *)__wcdb_synthesize_18:(void *)a0;
+ (id)swift_IntRes1;
+ (const void *)IntRes2;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (id)swift_IntRes2;
+ (const void *)StrRes1;
+ (const void *)__wcdb_synthesize_20:(void *)a0;
+ (id)swift_StrRes1;
+ (const void *)StrRes2;
+ (const void *)__wcdb_synthesize_21:(void *)a0;
+ (id)swift_StrRes2;

- (void).cxx_destruct;

@end
