@class NSArray, NSNumber;

@interface AWEFansPushForwardResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *urgeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) long long total;
@property (nonatomic) BOOL hasMore;

+ (id)urgeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
