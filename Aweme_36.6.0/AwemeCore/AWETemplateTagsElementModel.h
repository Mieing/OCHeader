@class NSString, AWETemplateTagsTextInfoModel, AWETemplateTagsImageInfoModel, AWETemplateTagsMultiTextInfoModel, AWETemplateTagsMultiImageInfoModel;

@interface AWETemplateTagsElementModel : AWEBaseApiModel

@property (nonatomic) long long elementType;
@property (retain, nonatomic) AWETemplateTagsTextInfoModel *textInfo;
@property (retain, nonatomic) AWETemplateTagsMultiTextInfoModel *multiTextInfo;
@property (retain, nonatomic) AWETemplateTagsImageInfoModel *imageInfo;
@property (retain, nonatomic) AWETemplateTagsMultiImageInfoModel *multiImageInfo;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *dataRef;

+ (id)textInfoJSONTransformer;
+ (id)imageInfoJSONTransformer;
+ (id)multiTextInfoJSONTransformer;
+ (id)multiImageInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
