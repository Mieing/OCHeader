@class NSString, NSMutableDictionary;

@interface CGMessageSDK : CGObject <CGCustomMessageCallback, CGMessageSDK>

@property (retain, nonatomic) NSMutableDictionary *dictHandlers;
@property (retain, nonatomic) NSMutableDictionary *midToCallbackDic;
@property (nonatomic) long long txCurQPS;
@property (nonatomic) long long rxCurQPS;
@property (nonatomic) double txRecordTime;
@property (nonatomic) double rxRecordTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)onReceiveMessage:(id)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)registerMessageWithCommand:(long long)a0 target:(id)a1 selector:(SEL)a2;
- (void)onReceiveBinaryMessage:(id)a0;
- (void)didMessageSendTimeout:(id)a0;
- (void)sendCustomMessageWithModel:(id)a0;
- (void)trackSendFrequentMsg;
- (void)trackSendMsgWithMid:(id)a0;
- (void)sendACKWithMid:(id)a0;
- (void)dispatchCommand:(long long)a0 message:(id)a1;
- (void)trackReceiveMsgWithMid:(id)a0;
- (void)trackReceiveAckWithMid:(id)a0;
- (void)trackReceiveFrequentMsg;
- (void)sendMessage:(id)a0 withCallback:(id /* block */)a1;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;

@end
