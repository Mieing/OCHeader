@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenRelativeUserModel : AWEBaseDataModel

@property (nonatomic) long long uid;
@property (retain, nonatomic) AWECodeGenUrlModel *avatarModel;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *remarkName;
@property (retain, nonatomic) AWECodeGenUrlModel *avatarLargerModel;
@property (retain, nonatomic) AWECodeGenUrlModel *avatarThumbModel;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *secUid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
