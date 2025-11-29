@class NSArray, HMDThreadSafeDictionary, NSString, NSMutableArray;

@interface AWEIMMangoCountDownManager : NSObject <IESIMUserServiceMessage>

@property (copy, nonatomic) NSArray *reservedGroupList;
@property (retain, nonatomic) NSMutableArray *didSendTexts;
@property (retain, nonatomic) HMDThreadSafeDictionary *monitorParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingConfig;
+ (void)markReserveCountDownCid:(id)a0;
+ (id)makeFakeMessage:(id)a0 firework:(BOOL)a1 currentTime:(double)a2;
+ (id)sendFakeMessage:(id)a0 toConList:(id)a1;
+ (void)markDidSendCountDownCids:(id)a0;
+ (BOOL)isReservedGroupCon:(id)a0 extKey:(id)a1;
+ (void)didReserveCountDownWithCid:(id)a0;
+ (void)removeDidSendCountDownCids;
+ (id)didSendCountDownCids;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)startMgCountDownTimer;
- (void)resetAllWithLogout:(BOOL)a0;
- (void)fetchReserveGroupListWithCompletion:(id /* block */)a0;
- (void)triggerSendMessageWithIndex:(unsigned long long)a0 settingConfig:(id)a1 currentServerTime:(double)a2;
- (void)tryHandleOutTimeCountDown:(id)a0;
- (void)p_mgTimerFired;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
