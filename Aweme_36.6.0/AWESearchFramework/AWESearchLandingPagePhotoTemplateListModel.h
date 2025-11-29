@class NSString, NSMutableArray;

@interface AWESearchLandingPagePhotoTemplateListModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *props;

+ (id)propsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
