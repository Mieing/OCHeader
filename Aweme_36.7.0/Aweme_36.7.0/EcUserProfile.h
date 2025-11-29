@interface EcUserProfile : EcWCDBBase <WCTTableCoding>

@property (nonatomic) unsigned long long uid;
@property (nonatomic) unsigned long long quota;
@property (nonatomic) unsigned long long usage;
@property (nonatomic) unsigned long long media_num;

+ (id)modelCustomPropertyMapper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)media_num;
+ (const void *)uid;
+ (const void *)usage;
+ (const void *)quota;

@end
