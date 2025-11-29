@class NSString, NSArray, IESIMCodeGenActionMobEventInfoModel;

@interface IESIMCodeGenGroupActionCheckMultiButtonPopUpModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *buttonsModelArray;
@property (retain, nonatomic) IESIMCodeGenActionMobEventInfoModel *mobEventWhenShowModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
