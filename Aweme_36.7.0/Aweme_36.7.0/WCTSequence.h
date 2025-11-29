@class NSString;

@interface WCTSequence : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int seq;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (id)TableName;
+ (const void *)name;
+ (const void *)seq;

- (void).cxx_destruct;
- (id)description;

@end
