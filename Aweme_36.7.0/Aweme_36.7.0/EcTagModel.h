@class NSString;

@interface EcTagModel : EcWCDBBase <WCTTableCoding>

@property (nonatomic) unsigned long long tag_id;
@property (nonatomic) unsigned long long creator_id;
@property (nonatomic) unsigned long long cover_link;
@property (nonatomic) unsigned long long added_at_utc;
@property (nonatomic) unsigned long long created_at_utc;
@property (nonatomic) unsigned long long modified_time_utc;
@property (copy, nonatomic) NSString *display_name;
@property (nonatomic) BOOL deleted;
@property (copy, nonatomic) NSString *desc;

+ (id)modelCustomPropertyMapper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)tag_id;
+ (const void *)cover_link;
+ (const void *)added_at_utc;
+ (const void *)created_at_utc;
+ (const void *)creator_id;
+ (const void *)modified_time_utc;
+ (const void *)display_name;
+ (const void *)desc;
+ (const void *)deleted;

- (id)formateDisplayInfo;
- (void).cxx_destruct;

@end
