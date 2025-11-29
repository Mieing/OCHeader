@class NSString, NSArray;

@interface AWESearchCommonAbstractModel : AWEBaseApiModel

@property (nonatomic) BOOL hasTab;
@property (copy, nonatomic) NSString *landingType;
@property (copy, nonatomic) NSArray *tabPanelArray;

+ (id)tabPanelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
