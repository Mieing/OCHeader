@class NSString, LiveSdkInfo, FinderLiveContact;

@interface FinderLiveAppMsgAcceptMicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *micSdkUserId;
@property (nonatomic) int micType;
@property (nonatomic) unsigned int acceptSeatId;
@property (retain, nonatomic) LiveSdkInfo *liveSdkInfo;
@property (retain, nonatomic) FinderLiveContact *micContact;
@property (nonatomic) unsigned long long expiredTime;
@property (nonatomic) unsigned long long seq;

+ (void)initialize;

@end
