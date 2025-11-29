@class NSObject, NSString, AWEKefuGuideRTCConnectConfig;
@protocol AWEKefuRTCConnectManagerDelegate;

@interface AWEKefuRTCConnectManager : NSObject <AWERRTVRTMMessageListener>

@property (nonatomic) BOOL isConnect;
@property (retain, nonatomic) AWEKefuGuideRTCConnectConfig *config;
@property (weak, nonatomic) NSObject<AWEKefuRTCConnectManagerDelegate> *delegate;
@property (copy, nonatomic) NSString *roomId;

- (int)sendScreenStreamSEIWithRoomId:(id)a0 withMessage:(id)a1 andRepeatCount:(int)a2;
- (BOOL)registerRTMMessageListener:(id)a0;
- (BOOL)unRegisterRTMMessageListener:(id)a0;
- (void)onAWERTVDidFinishNotification:(id)a0;
- (BOOL)connectWithMessage:(id *)a0;
- (BOOL)closeWithMessage:(id *)a0;
- (BOOL)sendSEIMessage:(id)a0 repeatCount:(int)a1 message:(id *)a2;
- (BOOL)p_onReceiveVoipRTMMessage:(id)a0 fromUid:(id)a1 errorMessage:(id *)a2;
- (void)onReceiveVoipRTMMessage:(id)a0 fromUid:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end
