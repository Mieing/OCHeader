@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenFriendInteractionDiggModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *remarkName;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) AWECodeGenUrlModel *avatarModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
