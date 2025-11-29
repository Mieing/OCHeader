@class NSArray;

@interface AWELuckyCatStandardPopupModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSArray *popupList;

+ (id)popupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
