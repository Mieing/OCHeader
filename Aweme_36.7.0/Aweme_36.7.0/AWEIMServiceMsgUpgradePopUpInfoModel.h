@class NSString, NSArray;

@interface AWEIMServiceMsgUpgradePopUpInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *titleIcon;
@property (retain, nonatomic) NSArray *content;

+ (id)contentJSONTransformer;
+ (id)generateFromGlobalConfig;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
