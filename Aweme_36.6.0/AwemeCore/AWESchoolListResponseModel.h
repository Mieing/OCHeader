@class NSArray, NSNumber;

@interface AWESchoolListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *schoolList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *total;

+ (id)schoolListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
