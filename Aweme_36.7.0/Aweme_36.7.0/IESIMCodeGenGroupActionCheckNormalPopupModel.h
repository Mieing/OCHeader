@class NSString, IESIMCodeGenActionMobEventInfoModel;

@interface IESIMCodeGenGroupActionCheckNormalPopupModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonDesc;
@property (retain, nonatomic) IESIMCodeGenActionMobEventInfoModel *mobEventWhenShowModel;
@property (retain, nonatomic) IESIMCodeGenActionMobEventInfoModel *mobEventWhenClickModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
