@class NSString;

@interface AWEFansPushGiftModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long diamondCount;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) long long count;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
