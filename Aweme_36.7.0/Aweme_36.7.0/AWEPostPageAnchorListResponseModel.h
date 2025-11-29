@class NSArray, AWECodeGenAnchorListTipModel;

@interface AWEPostPageAnchorListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *anchorList;
@property (retain, nonatomic) AWECodeGenAnchorListTipModel *tipModel;

+ (id)anchorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
