@class NSString;

@interface AWENearbyGrouponFeedFirstPoiInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiCity;
@property (copy, nonatomic) NSString *severTimestamp;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
