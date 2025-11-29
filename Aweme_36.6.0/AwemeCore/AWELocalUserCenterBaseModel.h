@class NSString;

@interface AWELocalUserCenterBaseModel : AWEBaseApiModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long updateTime;
@property (readonly, copy, nonatomic) NSString *targetTable;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) long long modifyTime;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)userID;
+ (const void *)isDeleted;

@end
