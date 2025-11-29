@class NSString, NSDate;

@interface WCScheduleItem : MMObject <PBCoding, NSCoding, WCTTableCoding>

@property (retain, nonatomic) NSString *remindId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long mesSvrID;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) unsigned int messageInnerType;
@property (nonatomic) unsigned int favId;
@property (nonatomic) unsigned int favLocalId;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long type;
@property (nonatomic) int opType;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned int remindTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)mesSvrID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_mesSvrID;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_username;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_content;
+ (const void *)date;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_date;
+ (const void *)favId;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_favId;
+ (const void *)favLocalId;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_favLocalId;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_type;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_createTime;
+ (const void *)remindTime;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_remindTime;
+ (const void *)remindId;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_remindId;
+ (void)__wcdb_column_constraint_10:(void *)a0;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_mesSvrID;
+ (void)PBArrayAdd_date;
+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_type;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isEqualTo:(id)a0;
- (void).cxx_destruct;

@end
