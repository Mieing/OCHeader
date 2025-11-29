@class NSString, AWEBarIconModel, AWEBarContainerInfoModel, AWEBarShowStrategyModel, NSDictionary, AWEBarTextModel, AWEBarSeparatorTextModel, AWETemplateBarRelatedSearchModel, NSNumber;

@interface AWETemplateBarModel : AWEBaseApiModel

@property (nonatomic) long long shouldShowType;
@property (nonatomic) long long currentIndexOfInterestDiscover;
@property (retain, nonatomic) AWETemplateBarRelatedSearchModel *relatedSearchExtraModel;
@property (copy, nonatomic) NSDictionary *extraDic;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *priority;
@property (nonatomic) unsigned long long schemaType;
@property (nonatomic) unsigned long long viewType;
@property (nonatomic) long long businessType;
@property (retain, nonatomic) AWEBarShowStrategyModel *showStrategy;
@property (retain, nonatomic) AWEBarContainerInfoModel *containerInfo;
@property (retain, nonatomic) AWEBarIconModel *headerIcon;
@property (retain, nonatomic) AWEBarTextModel *title;
@property (retain, nonatomic) AWEBarSeparatorTextModel *separatorIcon;
@property (retain, nonatomic) AWEBarTextModel *mainContent;
@property (retain, nonatomic) AWEBarTextModel *subContent;
@property (retain, nonatomic) AWEBarIconModel *tailIcon;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *logExtra;

+ (id)headerIconJSONTransformer;
+ (id)mainContentJSONTransformer;
+ (id)viewTypeJSONTransformer;
+ (id)containerInfoJSONTransformer;
+ (id)showStrategyJSONTransformer;
+ (id)separatorIconJSONTransformer;
+ (id)subContentJSONTransformer;
+ (id)tailIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;

- (void).cxx_destruct;

@end
