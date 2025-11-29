@class NSString;

@interface AWEImageAlbumImageNavigatorInfo : AWEBaseApiModel

@property (nonatomic) long long navigatorType;
@property (copy, nonatomic) NSString *navigatorName;

+ (id)navigatorTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
