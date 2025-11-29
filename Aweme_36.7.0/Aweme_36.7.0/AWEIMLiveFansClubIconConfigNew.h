@class NSString, NSArray;

@interface AWEIMLiveFansClubIconConfigNew : MTLModel <WCTTableCoding, SSWCTTableCoding, MTLJSONSerializing, AWEIMGroupParticipantBizInfoDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *icon14URL;
@property (copy, nonatomic) NSString *icon16URL;
@property (retain, nonatomic) NSArray *iconList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyToModelClassInArrayMap;
+ (const void *)iconList;
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
+ (const void *)icon14URL;
+ (const void *)ss_level;
+ (const void *)ss_icon14URL;
+ (const void *)ss_icon16URL;
+ (const void *)ss_iconList;
+ (id)swift_ss_level;
+ (id)swift_ss_icon14URL;
+ (const void *)icon16URL;
+ (id)swift_ss_icon16URL;
+ (id)swift_ss_iconList;
+ (const void *)level;
+ (const void *)allProperties;
+ (id)tableName;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconInfoWithScene:(long long)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
