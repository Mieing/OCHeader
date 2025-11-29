@class NSString, NSNumber;

@interface AWESendAwardBaseConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *sendUniqId;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *skuId;
@property (copy, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSNumber *timestampP;
@property (copy, nonatomic) NSString *sign;
@property (retain, nonatomic) NSNumber *episodeRank;
@property (nonatomic) unsigned long long bizType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
