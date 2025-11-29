@class NSString, AWEIMActiveGroupToastModel;

@interface AWEIMActiveUserInfo : NSObject <AWEIMActiveUserInfoService>

@property (nonatomic) long long chatType;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL canShowActiveStatus;
@property (nonatomic) BOOL online;
@property (nonatomic) double updateTime;
@property (readonly, nonatomic) BOOL isFresh;
@property (nonatomic) BOOL flagedStale;
@property (nonatomic) long long userRoleType;
@property (nonatomic) long long singeChatRelationType;
@property (nonatomic) long long lastActiveTime;
@property (retain, nonatomic) AWEIMActiveGroupToastModel *groupToastModel;
@property (nonatomic) long long conversationActiveType;
@property (nonatomic) long long activeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getActiveUserStringWithSourceType:(unsigned long long)a0;
- (BOOL)isFreshWithSourceType:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 key:(id)a1;

@end
