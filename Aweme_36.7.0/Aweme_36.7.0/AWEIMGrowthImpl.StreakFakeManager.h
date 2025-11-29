@interface AWEIMGrowthImpl.StreakFakeManager : NSObject <IESIMChatDataManagerDelegate> {
    void /* unknown type, empty encoding */ calculator;
    void /* unknown type, empty encoding */ trigger;
    void /* unknown type, empty encoding */ trackFakeDataExpiredTimeStamp;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ streakFakeDataClearFlag;
    void /* unknown type, empty encoding */ streakFakeDataRequestTimestamp;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ streakFakeTasks;
}

- (void)iesim_chatDataManager:(id)a0 chatDidUpdate:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
