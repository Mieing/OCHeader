@class NSString;

@interface AFDLocalFollowModel : AFDLocalDataCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followType;
@property (nonatomic) long long followSubType;
@property (nonatomic) long long forwardTime;
@property (nonatomic) long long reverseTime;
@property (nonatomic) long long mutualTime;

+ (const void *)modifyTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)forwardTime;
+ (const void *)mutualTime;
+ (const void *)followType;
+ (const void *)syncTime;
+ (const void *)followSubType;
+ (const void *)reverseTime;
+ (const void *)followStatus;
+ (const void *)userID;
+ (const void *)isDeleted;
+ (const void *)primaryID;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
