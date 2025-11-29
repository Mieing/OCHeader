@class NSMutableDictionary;

@interface AWELoginFusionTracker : NSObject

@property (nonatomic) double lastRecordTime;
@property (retain, nonatomic) NSMutableDictionary *loginProcessTimeRecorder;
@property (nonatomic) long long profileSelfRetryCount;

+ (id)sharedInstance;

- (void)trackLoginProfileSelfRequestRetry:(long long)a0;
- (void)trackLoginProfileSelfRequestEnd:(id)a0;
- (void)trackSendDidFinishLoginWithUid:(id)a0;
- (void)trackLoginSendDidFinishUpdateCurrentFullUserForReason;
- (void)trackLoginSuccessButPassportUserNil;
- (void)trackUidNotEqualProfileSelfUid:(id)a0 passportUid:(id)a1 isFromLogin:(BOOL)a2;
- (void)trackPassportUidNotEqual:(id)a0 currentPassportUid:(id)a1 isFromLogin:(BOOL)a2;
- (void)trackFindUserCacheFailure:(unsigned long long)a0 passportUid:(id)a1 businessUid:(id)a2;
- (void)trackLoginPersistUserFail:(unsigned long long)a0;
- (void)trackLoginPersistSuccess;
- (void)trackPassportRequestStart;
- (void)trackPassportRequestEnd:(id)a0;
- (void)trackEvent:(id)a0 extraDict:(id)a1;
- (double)durationMS:(double)a0;
- (void)trackLoginProcessType:(unsigned long long)a0 error:(id)a1;
- (void)logErrorKey:(id)a0 extraDict:(id)a1;
- (void)logInfoKey:(id)a0 extraDict:(id)a1;
- (id)logStringForEvent:(id)a0 extraDict:(id)a1;
- (void)trackCurrentLoginUserStatusInScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetRecord;

@end
