@class AWEURLModel;

@interface AWENoticeImageUrlStructModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *imageUrlFirst;
@property (retain, nonatomic) AWEURLModel *imageUrlSecond;

+ (id)imageUrlFirstJSONTransformer;
+ (id)imageUrlSecondJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
