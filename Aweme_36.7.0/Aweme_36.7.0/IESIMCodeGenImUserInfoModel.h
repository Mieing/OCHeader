@class NSString, IESIMCodeGenUrlModel;

@interface IESIMCodeGenImUserInfoModel : AWEBaseDataModel

@property (nonatomic) long long uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) IESIMCodeGenUrlModel *avatarThumbModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
