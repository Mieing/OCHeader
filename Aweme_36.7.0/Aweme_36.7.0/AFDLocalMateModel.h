@class NSString;

@interface AFDLocalMateModel : AFDLocalDataCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long mateStatus;

+ (const void *)modifyTime;
+ (const void *)mateStatus;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)syncTime;
+ (const void *)userID;
+ (const void *)isDeleted;
+ (const void *)primaryID;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
