@class NSString, NSDictionary, NSNumber;

@interface AWEIMGroupSPConversationTask : NSObject

@property (readonly, copy) NSString *conversationShortID;
@property (readonly, copy) NSString *taskID;
@property (readonly, nonatomic) long long taskType;
@property (readonly, copy) NSString *taskName;
@property (readonly, copy) NSString *taskIcon;
@property (readonly, nonatomic) long long availableTime;
@property (readonly, nonatomic) long long expiredTime;
@property (readonly, nonatomic) long long currentProgress;
@property (readonly, nonatomic) long long totalProgress;
@property (readonly, nonatomic) BOOL isForbidden;
@property (readonly, nonatomic) long long taskVersion;
@property (readonly, nonatomic) long long taskStatus;
@property (readonly, nonatomic) long long taskStatusVersion;
@property (readonly, nonatomic) long long taskUserStatus;
@property (readonly, nonatomic) long long taskUserStatusVersion;
@property (readonly, copy) NSDictionary *localExt;
@property (retain, nonatomic) NSNumber *exposeTimeForHot;
@property (retain, nonatomic) NSNumber *exposeTimeForNew;
@property (nonatomic) BOOL hasClick;
@property (readonly, copy) NSDictionary *dynamicExt;
@property (readonly, copy) NSDictionary *userDynamicExt;
@property (readonly, copy) NSDictionary *solidExt;
@property (readonly, copy, nonatomic) NSString *actionSchema;

- (id)trackParams;
- (id)rewardSchema;
- (long long)rewardSchemaTimestamp;
- (id)rainID;
- (BOOL)isInValidTime;
- (id)decoratedRewardSchema:(id)a0;
- (long long)timeStatus;
- (void).cxx_destruct;

@end
