@class NSString, NSArray;

@interface AWESearResultMultiColumnSettingDialogConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *selectList;

+ (id)selectListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
