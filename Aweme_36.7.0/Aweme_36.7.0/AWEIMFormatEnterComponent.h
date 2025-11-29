@class NSString, NSDictionary, EnterFormatResponse_Data;

@interface AWEIMFormatEnterComponent : AWEIMComponentBase <AWEConversationFormatEnterService, AWEConversationFormatEnterContext, AWEIMMessageListDataAction> {
    void /* unknown type, empty encoding */ routerParamParser;
    void /* unknown type, empty encoding */ isInForeground;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enterApi;
    void /* unknown type, empty encoding */ UUID;
    void /* unknown type, empty encoding */ lastHistoryMsgIndex;
    void /* unknown type, empty encoding */ innerPostMsgBtnIndex;
    void /* unknown type, empty encoding */ didRequestEnterApi;
    void /* unknown type, empty encoding */ $__lazy_storage_$_baseChatExtra;
}

@property (nonatomic, readonly) long long postMsgBtnIndex;
@property (nonatomic, readonly) NSString *sessionId;
@property (nonatomic, readonly) NSDictionary *chatExtraContext;
@property (nonatomic, readonly) NSString *complianceText;
@property (nonatomic, readonly) long long teamType;
@property (nonatomic, readonly) NSDictionary *roomModelExtra;
@property (nonatomic, readonly) long long conLastHistoryMsgIndex;
@property (nonatomic, readonly) BOOL isAssistant;
@property (nonatomic, readonly) NSString *enterFrom;
@property (nonatomic, readonly) NSString *enterMethod;
@property (nonatomic, readonly) NSString *groupId;
@property (nonatomic, readonly) NSDictionary *commonTrackParams;
@property (nonatomic, retain) EnterFormatResponse_Data *roomModel;

- (void)markShowPostMsgBtnIndex:(long long)a0;
- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)hostVC_willDealloc;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
