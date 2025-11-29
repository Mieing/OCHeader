@class NSString, NSDictionary, AWESearchResultMultiColumnIconModel;

@interface AWESearchResultMultiColumnSettingSelectItemModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchResultMultiColumnIconModel *icon;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *secondTitle;
@property (nonatomic) long long selectValue;
@property (retain, nonatomic) NSDictionary *mobParams;
@property (copy, nonatomic) NSString *btm;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
