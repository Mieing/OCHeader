@class IESIMCodeGenUrlModel, NSString, IESIMCodeGenGuidanceUnreadModel, IESIMCodeGenVideoUnreadModel;

@interface IESIMCodeGenFamiliarUserModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) IESIMCodeGenUrlModel *avatarThumbModel;
@property (retain, nonatomic) IESIMCodeGenUrlModel *avatarLargerModel;
@property (retain, nonatomic) IESIMCodeGenUrlModel *avatar168X168Model;
@property (retain, nonatomic) IESIMCodeGenUrlModel *avatar300X300Model;
@property (nonatomic) int followStatus;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *remarkName;
@property (retain, nonatomic) IESIMCodeGenVideoUnreadModel *videoUnreadInfoModel;
@property (retain, nonatomic) IESIMCodeGenGuidanceUnreadModel *guidanceUnreadInfoModel;
@property (nonatomic) int followerStatus;
@property (nonatomic) BOOL isGroupOwner;
@property (nonatomic) long long onlineStatus;
@property (nonatomic) long long lastActiveTime;
@property (nonatomic) long long friendType;
@property (nonatomic) long long linkmicDays;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
