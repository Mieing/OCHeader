@class NSString;

@interface EcTagRelationModel : EcWCDBBase <WCTTableCoding>

@property (nonatomic) unsigned long long tag_id;
@property (nonatomic) unsigned long long link_id;
@property (nonatomic) unsigned long long cloud_id;
@property (copy, nonatomic) NSString *local_id;
@property (nonatomic) unsigned long long add_utc_ms;
@property (nonatomic) unsigned long long update_utc_ms;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *asset_id;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)cloud_id;
+ (const void *)tag_id;
+ (const void *)link_id;
+ (unsigned long long)generateLinkIdByAssetId:(id)a0;
+ (id)generateAssetIdByLinkId:(unsigned long long)a0;
+ (const void *)add_utc_ms;
+ (const void *)update_utc_ms;
+ (const void *)local_id;
+ (id)generateAssetIdByLocalId:(id)a0;
+ (id)generateLocalIdByAssetId:(id)a0;
+ (unsigned long long)generateLinkId;
+ (const void *)cursor;

- (id)initWithTagId:(unsigned long long)a0 linkId:(unsigned long long)a1 cloudId:(unsigned long long)a2 localId:(id)a3 addUtcMS:(unsigned long long)a4 updateUtcMs:(unsigned long long)a5;
- (void).cxx_destruct;

@end
