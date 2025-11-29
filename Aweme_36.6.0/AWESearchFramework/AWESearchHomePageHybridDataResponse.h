@class NSString, NSMutableArray;

@interface AWESearchHomePageHybridDataResponse : AWESearchResultCachalotDataResponse

@property (retain, nonatomic) NSMutableArray *patchData;
@property (copy, nonatomic) NSString *respFrom;
@property (copy, nonatomic) NSString *serverTimeDetail;

+ (id)patchDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
