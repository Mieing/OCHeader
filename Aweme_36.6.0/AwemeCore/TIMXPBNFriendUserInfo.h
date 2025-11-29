@class NSString, NSMutableDictionary, TIMXPBNProfile, TIMXPBNOnlineStatus;

@interface TIMXPBNFriendUserInfo : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) long long applyTimeSecond;
@property (nonatomic) BOOL hasApplyTimeSecond;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (retain, nonatomic) TIMXPBNProfile *profile;
@property (nonatomic) BOOL hasProfile;
@property (nonatomic) long long applyTime;
@property (nonatomic) BOOL hasApplyTime;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL hasCreateTime;
@property (copy, nonatomic) NSString *alias;
@property (nonatomic) BOOL hasAlias;
@property (nonatomic) long long modifyTime;
@property (nonatomic) BOOL hasModifyTime;
@property (retain, nonatomic) TIMXPBNOnlineStatus *onlineStatus;
@property (nonatomic) BOOL hasOnlineStatus;

+ (id)descriptor;

@end
