@class NSString, NSNumber;

@interface AFDLocalCloseFriendModel : AFDLocalDataCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long closeFriendType;
@property (retain, nonatomic) NSNumber *closeTime;
@property (retain, nonatomic) NSNumber *revCloseTime;

+ (const void *)modifyTime;
+ (const void *)closeTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)closeFriendType;
+ (const void *)revCloseTime;
+ (const void *)syncTime;
+ (const void *)userID;
+ (const void *)isDeleted;
+ (const void *)primaryID;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
