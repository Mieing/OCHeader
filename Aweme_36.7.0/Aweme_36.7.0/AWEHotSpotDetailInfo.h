@class NSString;

@interface AWEHotSpotDetailInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *detailTitle;
@property (nonatomic) long long type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
