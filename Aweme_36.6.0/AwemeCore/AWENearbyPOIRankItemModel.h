@class NSString, AWEPOIContentItemModel;

@interface AWENearbyPOIRankItemModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPOIContentItemModel *poiInfoModel;
@property (nonatomic) unsigned long long rankIndex;
@property (copy, nonatomic) NSString *rankScore;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
