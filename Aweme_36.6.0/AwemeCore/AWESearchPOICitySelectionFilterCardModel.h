@class NSString, NSArray, AWESearchPOICitySelectionFilterCardStyleConfigModel, NSNumber;
@protocol AWESearchPOICitySelectionFilterCardDelegate;

@interface AWESearchPOICitySelectionFilterCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *isPlaceholderNumber;
@property (copy, nonatomic) NSString *strText;
@property (copy, nonatomic) NSString *strLinkedText;
@property (copy, nonatomic) NSString *strCityCode;
@property (copy, nonatomic) NSString *strCityName;
@property (copy, nonatomic) NSString *strType;
@property (copy, nonatomic) NSString *strConditionField;
@property (copy, nonatomic) NSString *strConditionValue;
@property (copy, nonatomic) NSArray *arrChildrenComponents;
@property (retain, nonatomic) AWESearchPOICitySelectionFilterCardStyleConfigModel *styleConfig;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) struct CGSize { double width; double height; } cellCachedSize;
@property (weak, nonatomic) id<AWESearchPOICitySelectionFilterCardDelegate> cardDelegate;

+ (id)arrChildrenComponentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncValuesForKeysFromAnotherOne:(id)a0;
- (void).cxx_destruct;

@end
