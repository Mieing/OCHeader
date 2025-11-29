@class NSString, NSArray, AWETemplateTagsContainerStyleModel;

@interface AWETemplateTagsContainerModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *ID;
@property (nonatomic) long long template;
@property (retain, nonatomic) AWETemplateTagsContainerStyleModel *containerStyle;
@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSString *eventID;

+ (id)containerStyleJSONTransformer;
+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
