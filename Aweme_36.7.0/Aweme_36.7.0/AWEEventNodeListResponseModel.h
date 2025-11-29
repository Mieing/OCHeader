@class NSNumber, NSArray;

@interface AWEEventNodeListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *eventTime;
@property (copy, nonatomic) NSArray *eventNodeList;
@property (nonatomic) BOOL loadmoreHasMore;

+ (id)eventNodeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
