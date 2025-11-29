@class NSString, NSMutableDictionary;

@interface AWEIMXiaoheAIDoctorTrackComponent : AWEIMComponentBase <AWEIMXiaoheAIDoctorTrackInterface, AWEIMMessageListDataAction>

@property (nonatomic) BOOL trackEnable;
@property (retain, nonatomic) NSMutableDictionary *trackInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)willSendNewMessage;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)trackWithEvent:(id)a0 extraParams:(id)a1;
- (void)trackMessageFinishStream:(id)a0;
- (void)startStreamWithMessage:(id)a0;
- (void)endStreamWithMessage:(id)a0;
- (void)startEvent:(id)a0 info:(id)a1;
- (void)endEvent:(id)a0 trackContext:(id)a1;
- (void)trackAIResponseMessage:(id)a0;
- (void)trackUserSendMessage:(id)a0;
- (void)addCommonParamsToDic:(id)a0 message:(id)a1;
- (void)trackFailureStreamMessage:(id)a0;
- (void).cxx_destruct;

@end
