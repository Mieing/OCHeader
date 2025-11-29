@class NSString, NSDictionary;

@interface AWESearchEcomSliceSugModel : AWEBaseApiModel

@property (nonatomic) double itemHeight;
@property (copy, nonatomic) NSString *sliceName;
@property (copy, nonatomic) NSString *sliceInhouseUrl;
@property (copy, nonatomic) NSString *sliceOnlineUrl;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSDictionary *trendingEventParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
