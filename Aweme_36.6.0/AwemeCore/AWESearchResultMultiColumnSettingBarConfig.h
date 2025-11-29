@class NSString, AWESearchResultMultiColumnIconModel;

@interface AWESearchResultMultiColumnSettingBarConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWESearchResultMultiColumnIconModel *icon;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
