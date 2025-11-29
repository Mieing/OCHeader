@class NSString;

@interface EcSyncCursor : EcWCDBBase <WCTTableCoding>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *cursor;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)cursor;
+ (const void *)version;

- (void).cxx_destruct;

@end
