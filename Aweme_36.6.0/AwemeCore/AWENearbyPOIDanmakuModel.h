@class NSString, AWEURLModel;

@interface AWENearbyPOIDanmakuModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
