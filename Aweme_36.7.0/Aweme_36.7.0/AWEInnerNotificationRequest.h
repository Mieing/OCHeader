@class NSString, AWEInnerPushControlModel, NSArray, NSDictionary, NSNumber;

@interface AWEInnerNotificationRequest : NSObject <NSCopying>

@property (nonatomic) long long pushLevel;
@property (nonatomic) long long orderIndex;
@property (nonatomic) long long addTimeStamp;
@property (copy, nonatomic) NSString *ruleID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *vibrateTrackPushType;
@property (copy, nonatomic) NSString *vibrateTrackChatType;
@property (copy, nonatomic) NSString *vibrateTrackFromUserID;
@property (retain, nonatomic) NSNumber *platformAvoidReason;
@property (nonatomic) double imDispatchBeginTime;
@property (nonatomic) double businessAvoidBeginTime;
@property (retain, nonatomic) NSNumber *actualDisplayDuration;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *bizID;
@property (nonatomic) BOOL needLimitNoticeFrequency;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) Class contentClass;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (retain, nonatomic) id businessData;
@property (nonatomic) long long priority;
@property (copy, nonatomic) id /* block */ isEnableToDisplayNotification;
@property (nonatomic) BOOL kickNotificationIfDequeueEnable;
@property (nonatomic) BOOL requireLogin;
@property (nonatomic) BOOL needEnqueue;
@property (copy, nonatomic) NSArray *unblockBusinessList;
@property (readonly, copy, nonatomic) NSString *trackIdentifier;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) BOOL ignorePriorityReset;
@property (nonatomic) BOOL isAggregation;
@property (readonly, nonatomic) double buildRequestCreateTime;
@property (readonly, nonatomic) NSString *requestID;
@property (copy, nonatomic) id /* block */ requestHasCancelled;

+ (id)requestWithIdentifier:(id)a0 type:(long long)a1 contentClass:(id)a2;

- (void)trackInnerPushBusinessAvoidWithResult:(long long)a0 avoidDuration:(double)a1;
- (void)trackInnerPushLogWithStage:(id)a0 isSuccess:(BOOL)a1;
- (void)trackInnerPushRequestConstruct;
- (id)getRequestBasicInfoParams;
- (void)recordPlatformAvoidBeginTime;
- (void)trackPushInnerBannerShow:(BOOL)a0;
- (void)recordCompleteDisplayActualTime;
- (void)recordActualDisplayDuration;
- (double)platformAvoidBeginTime;
- (void)setCompleteDisplayActualTime:(double)a0;
- (void)setPlatformAvoidBeginTime:(double)a0;
- (double)completeDisplayActualTime;
- (id)initWithRequestIdentifier:(id)a0 type:(long long)a1 contentClass:(id)a2;
- (void)copyFromRequest:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
