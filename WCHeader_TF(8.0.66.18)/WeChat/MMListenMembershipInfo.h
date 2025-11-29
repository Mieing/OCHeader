@class NSString, MMListenMembershipInfo_BindQQMusicInfo;

@interface MMListenMembershipInfo : WXPBGeneratedMessage

@property (nonatomic) int membershipType;
@property (nonatomic) unsigned long long expireTime;
@property (nonatomic) BOOL isSubscribe;
@property (retain, nonatomic) NSString *resourceId;
@property (nonatomic) unsigned long long joinTime;
@property (nonatomic) BOOL isCancelSubscribe;
@property (nonatomic) unsigned long long renewTime;
@property (retain, nonatomic) MMListenMembershipInfo_BindQQMusicInfo *bindQqmusicInfo;

+ (void)initialize;

@end
