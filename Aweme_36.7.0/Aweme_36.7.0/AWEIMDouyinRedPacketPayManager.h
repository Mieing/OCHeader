@class NSString, NSDictionary, AWEIMDouyinRedPacketDataManager;
@protocol AWEIMMessageConversationProtocol, AWEIMRedPacketTrackParamSourceProtocol;

@interface AWEIMDouyinRedPacketPayManager : NSObject <CJPayAPIDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *dataManager;
@property (copy, nonatomic) NSString *clientMsgId;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *redPacketId;
@property (retain, nonatomic) id<AWEIMMessageConversationProtocol> conversation;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long amount;
@property (nonatomic) long long count;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long subtype;
@property (copy, nonatomic) NSString *coverId;
@property (retain, nonatomic) NSDictionary *extParams;
@property (weak, nonatomic) id<AWEIMRedPacketTrackParamSourceProtocol> trackParamSource;
@property (nonatomic) unsigned long long productType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callState:(BOOL)a0 fromScene:(long long)a1;
- (void)onResponse:(id)a0;
- (void)hideLoading;
- (void)sendRedPacketToConversation:(id)a0 amount:(long long)a1 count:(long long)a2 type:(unsigned long long)a3 subtype:(unsigned long long)a4 title:(id)a5 extParams:(id)a6 completion:(id /* block */)a7;
- (void)accessCJPayDebug;
- (void)performPayCallbackWithError:(id)a0 showErrorToast:(BOOL)a1 canceled:(BOOL)a2;
- (void)p_trackWithEvent:(id)a0 param:(id)a1;
- (void)sendRedPacketToConversation:(id)a0 amount:(long long)a1 count:(long long)a2 type:(unsigned long long)a3 subtype:(unsigned long long)a4 title:(id)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;
- (void)showLoading;

@end
