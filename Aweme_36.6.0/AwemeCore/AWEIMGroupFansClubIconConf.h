@class NSString;

@interface AWEIMGroupFansClubIconConf : AWEBaseApiModel <WCTTableCoding, SSWCTTableCoding, AWEIMGroupParticipantBizInfoDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *lightUpUrl;
@property (copy, nonatomic) NSString *unLightUpUrl;
@property (copy, nonatomic) NSString *darkLightUpUrl;
@property (copy, nonatomic) NSString *darkUnLightUpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)ss_level;
+ (id)swift_ss_level;
+ (const void *)ss_lightUpUrl;
+ (const void *)ss_unLightUpUrl;
+ (const void *)ss_darkLightUpUrl;
+ (const void *)ss_darkUnLightUpUrl;
+ (const void *)lightUpUrl;
+ (id)swift_ss_lightUpUrl;
+ (const void *)unLightUpUrl;
+ (id)swift_ss_unLightUpUrl;
+ (const void *)darkLightUpUrl;
+ (id)swift_ss_darkLightUpUrl;
+ (const void *)darkUnLightUpUrl;
+ (id)swift_ss_darkUnLightUpUrl;
+ (const void *)level;
+ (const void *)allProperties;
+ (id)tableName;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
