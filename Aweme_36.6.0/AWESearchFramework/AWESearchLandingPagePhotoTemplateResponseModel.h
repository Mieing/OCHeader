@class AWESearchLandingPagePhotoTemplateListModel;

@interface AWESearchLandingPagePhotoTemplateResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchLandingPagePhotoTemplateListModel *photoTemplateList;

+ (id)photoTemplateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
