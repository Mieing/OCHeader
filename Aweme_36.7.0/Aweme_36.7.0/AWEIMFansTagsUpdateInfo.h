@class NSString, NSDate;

@interface AWEIMFansTagsUpdateInfo : NSObject <WCTTableCoding, SSWCTTableCoding, AWEIMGroupParticipantBizInfoDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *cid;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (void)__wcdb_column_constraint_9:(void *)a0;
+ (const void *)ss_cid;
+ (const void *)ss_lastUpdateDate;
+ (id)swift_ss_cid;
+ (id)swift_ss_lastUpdateDate;
+ (const void *)cid;
+ (const void *)lastUpdateDate;
+ (const void *)allProperties;
+ (id)tableName;

- (void).cxx_destruct;

@end
