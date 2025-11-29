@class NSString, NSArray, IESIMCodeGenTagApplicationTipsModel;

@interface IESIMCodeGenTagApplicationModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *applicationId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSArray *tagsModelArray;
@property (nonatomic) long long customizedType;
@property (retain, nonatomic) IESIMCodeGenTagApplicationTipsModel *tipsModel;
@property (copy, nonatomic) NSString *tagKey;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
