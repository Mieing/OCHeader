@class NSString, IESIMUGCodeGenDescTagModel;

@interface IESIMUGCodeGenFriendInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) IESIMUGCodeGenDescTagModel *descTagModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
