@class NSString, NSMutableDictionary, RTVVoipMissCallConfig, NSURL, NSNumber;

@interface RTVVoipMissCallViewModel : NSObject

@property (copy, nonatomic) NSString *desc;
@property (readonly, nonatomic) long long count;
@property (retain, nonatomic) NSNumber *callTimestamp;
@property (retain, nonatomic) RTVVoipMissCallConfig *config;
@property (retain, nonatomic) NSMutableDictionary *monitorTrackInfo;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, nonatomic) NSURL *avatarURL;
@property (readonly, nonatomic) BOOL onlineStatus;
@property (readonly, nonatomic) BOOL enableReply;
@property (readonly, nonatomic) long long voipType;
@property (readonly, nonatomic) long long bizType;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *conShortID;

- (id)monitorInfo;
- (void)setMonitorValue:(id)a0 forKey:(id)a1;
- (id)initWithUser:(id)a0 missCall:(id)a1 config:(id)a2;
- (id)initWithUser:(id)a0 voip:(id)a1 config:(id)a2;
- (void)transferGroupToPrivateChat;
- (BOOL)isEnableConsume;
- (BOOL)mergeWithMissCall:(id)a0;
- (void)__setUserInfoWithUser:(id)a0;
- (BOOL)__enableReply;
- (void)__updateMonitorValue;
- (id)__generateDesc;
- (id)__defaultDesc;
- (id)__invitedTime;
- (void).cxx_destruct;

@end
