@interface AWECodeGenFollowShootClipInfoModel : AWEBaseDataModel

@property (nonatomic) long long clipVideoAll;
@property (nonatomic) long long clipFromPlatform;
@property (nonatomic) long long clipFromUser;
@property (nonatomic) long long originClipId;

+ (id)JSONKeyPathsByPropertyKey;

@end
