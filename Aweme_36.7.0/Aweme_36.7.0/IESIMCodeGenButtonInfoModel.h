@class NSString, IESIMCodeGenActionMobEventInfoModel;

@interface IESIMCodeGenButtonInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *actionSchema;
@property (retain, nonatomic) IESIMCodeGenActionMobEventInfoModel *actionMobEventModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
