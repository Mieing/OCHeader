@class NSString, AWETemplateTagsLabelDetailData;

@interface AWETemplateTagsLabelData : AWEBaseApiModel

@property (copy, nonatomic) NSString *dataRef;
@property (retain, nonatomic) AWETemplateTagsLabelDetailData *detailData;

+ (id)detailDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
