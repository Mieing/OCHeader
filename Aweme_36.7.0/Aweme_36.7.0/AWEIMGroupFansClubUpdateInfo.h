@class NSString, NSNumber, NSDate;

@interface AWEIMGroupFansClubUpdateInfo : AWEBaseApiModel <WCTTableCoding, SSWCTTableCoding, AWEIMGroupParticipantBizInfoDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *cid;
@property (retain, nonatomic) NSDate *localLastUpdateDate;
@property (retain, nonatomic) NSNumber *serverLastUpdateTimeInMS;
@property (nonatomic) long long expireIntervalInMS;
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
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (const void *)ss_cid;
+ (id)swift_ss_cid;
+ (const void *)ss_localLastUpdateDate;
+ (const void *)ss_serverLastUpdateTimeInMS;
+ (const void *)ss_expireIntervalInMS;
+ (const void *)localLastUpdateDate;
+ (id)swift_ss_localLastUpdateDate;
+ (const void *)serverLastUpdateTimeInMS;
+ (id)swift_ss_serverLastUpdateTimeInMS;
+ (const void *)expireIntervalInMS;
+ (id)swift_ss_expireIntervalInMS;
+ (const void *)cid;
+ (const void *)allProperties;
+ (id)tableName;

- (void).cxx_destruct;

@end
