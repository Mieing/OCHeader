@class NSArray, NSString;

@interface IESIMUGCodeGenFriendListModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *uidArray;
@property (copy, nonatomic) NSString *lastUpdateTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
