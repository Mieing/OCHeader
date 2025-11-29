@class AWEURLModel;

@interface AWENearbyPOICardServiceIcon : AWEBaseApiModel

@property (nonatomic) unsigned long long iconType;
@property (retain, nonatomic) AWEURLModel *serviceIconURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
