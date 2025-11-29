@class NSString;

@interface AFDLocalStoryStatusModel : AFDLocalDataCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) long long storyStatus;
@property (nonatomic) long long createTime;
@property (nonatomic) double timeToLiveSecond;

+ (const void *)modifyTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)syncTime;
+ (const void *)storyStatus;
+ (const void *)timeToLiveSecond;
+ (const void *)createTime;
+ (const void *)isDeleted;
+ (const void *)primaryID;
+ (const void *)itemID;
+ (id)JSONKeyPathsByPropertyKey;
+ (const void *)authorID;

- (id)initWithRingModel:(id)a0;
- (id)storyRingModel;
- (void).cxx_destruct;

@end
