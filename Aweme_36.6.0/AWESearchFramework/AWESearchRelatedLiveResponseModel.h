@class NSArray, NSString;

@interface AWESearchRelatedLiveResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *rooms;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long backupOffset;
@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *searchID;

+ (id)roomsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
