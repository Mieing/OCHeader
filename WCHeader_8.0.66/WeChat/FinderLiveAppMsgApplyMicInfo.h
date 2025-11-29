@class NSData, NSString, FinderLiveLocation;

@interface FinderLiveAppMsgApplyMicInfo : WXPBGeneratedMessage

@property (nonatomic) int micType;
@property (nonatomic) unsigned int applySeatId;
@property (nonatomic) BOOL autoConnectFlag;
@property (retain, nonatomic) NSData *inviteMicBuffer;
@property (nonatomic) BOOL isPurchaseMic;
@property (retain, nonatomic) NSString *consultationContent;
@property (nonatomic) BOOL anonymousApplyMic;
@property (nonatomic) unsigned int wecoinCount;
@property (retain, nonatomic) FinderLiveLocation *location;
@property (nonatomic) unsigned int confirmTtl;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (nonatomic) unsigned int micUserAttrFlag;
@property (nonatomic) unsigned long long confirmExpiredTime;
@property (nonatomic) unsigned int confirmExpiredRelativeTime;

+ (void)initialize;

@end
