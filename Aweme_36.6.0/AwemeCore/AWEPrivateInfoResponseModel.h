@class NSArray, AWEURLModel;

@interface AWEPrivateInfoResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *labelPrivate;
@property (copy, nonatomic) NSArray *tagLabels;
@property (copy, nonatomic) NSArray *hybridLabels;

+ (id)tagLabelsJSONTransformer;
+ (id)hybridLabelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
