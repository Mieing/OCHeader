@class NSString;

@interface AFDFriendsTabDeduplicateModel : NSObject <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) double recordedTimestamp;
@property (copy, nonatomic) NSString *comeFrom;
@property (nonatomic) BOOL isStory;
@property (nonatomic) BOOL isCfMoment;
@property (nonatomic) BOOL isMask;
@property (nonatomic) BOOL is25Story;

+ (const void *)isStory;
+ (const void *)awemeID;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)recordedTimestamp;
+ (const void *)comeFrom;
+ (const void *)isCfMoment;
+ (const void *)isMask;

- (void).cxx_destruct;

@end
