@class NSString;

@interface WAPrefetchSequenceInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *cmdId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int cmdType;
@property (nonatomic) unsigned int sequence;
@property (retain, nonatomic) NSString *cmdKey;
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
+ (const void *)cmdId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_cmdId;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_appId;
+ (const void *)cmdType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_cmdType;
+ (const void *)sequence;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_sequence;
+ (const void *)cmdKey;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_cmdKey;
+ (void)__wcdb_column_constraint_5:(void *)a0;

- (void).cxx_destruct;

@end
