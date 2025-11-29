@class NSString;

@interface WCTMaster : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *tableName;
@property (nonatomic) int rootpage;
@property (retain, nonatomic) NSString *sql;

+ (const void *)rootpage;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (id)TableName;
+ (const void *)sql;
+ (const void *)name;
+ (const void *)type;
+ (const void *)tableName;

- (void).cxx_destruct;
- (id)description;

@end
