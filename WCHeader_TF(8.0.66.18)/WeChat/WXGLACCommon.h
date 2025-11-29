@class NSArray;

@interface WXGLACCommon : NSObject {
    unsigned long long m_heartBeatInterval;
    unsigned long long m_slowCutInterval;
    unsigned long long m_slowGapSpeed;
    NSArray *m_resendIntervalArray;
    double m_testSpeedDiff;
    BOOL m_detectReach;
    BOOL m_testSpeedOpen;
}

+ (id)sharedInstance;
+ (unsigned int)getTestCount;
+ (id)getTestSpeedPacket;
+ (unsigned int)getTestPacketLength;
+ (BOOL)isTestSpeedPacket:(id)a0;
+ (id)getSafeDeviceName;

- (id)init;
- (unsigned long long)getHeartBeatInterval;
- (unsigned long long)getSlowCutInterval;
- (unsigned long long)getSlowGapSpeed;
- (BOOL)getClientDetectReach;
- (double)getTestSpeedDiff;
- (id)getResendTimeIntervalArray;
- (BOOL)testSpeedOpen;
- (void).cxx_destruct;

@end
