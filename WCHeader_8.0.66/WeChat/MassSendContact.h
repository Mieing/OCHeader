@class NSString;

@interface MassSendContact : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int ConIntRes2;
@property (retain, nonatomic) NSString *ConStrRes1;
@property (retain, nonatomic) NSString *ConStrRes2;
@property (retain, nonatomic) NSString *m_nsUsrName;
@property (retain, nonatomic) NSString *m_nsDetail;
@property (nonatomic) unsigned int m_uiToListCount;
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
+ (const void *)m_nsUsrName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_nsUsrName;
+ (const void *)m_nsDetail;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_m_nsDetail;
+ (const void *)m_uiToListCount;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_m_uiToListCount;
+ (const void *)ConIntRes2;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_ConIntRes2;
+ (const void *)ConStrRes1;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_ConStrRes1;
+ (const void *)ConStrRes2;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_ConStrRes2;
+ (void)__wcdb_column_constraint_6:(void *)a0;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_column_constraint_8:(void *)a0;
+ (void)additionalObjectRelationalMapping:(void *)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
