@class NSString, AWEURLModel;

@interface AWEFavoriteGoodsGuideBottomNotiModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *mainGuideText;
@property (copy, nonatomic) NSString *subGuideText;
@property (retain, nonatomic) AWEURLModel *guidePic;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) unsigned long long collectType;
@property (nonatomic) long long maxExposeCount;

+ (id)guidePicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
