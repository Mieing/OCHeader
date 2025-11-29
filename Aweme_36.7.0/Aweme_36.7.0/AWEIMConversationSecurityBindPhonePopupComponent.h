@class RxDeferred, NSString;

@interface AWEIMConversationSecurityBindPhonePopupComponent : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMConversationSecurityBindPhonePopupServiceProtocol>

@property (nonatomic) long long popupViewStatus;
@property (retain, nonatomic) RxDeferred *deffer;
@property (retain, nonatomic) NSString *alertDes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableWithCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (long long)messageListPopupViewStatus;
- (void)messageListPopupViewShow;
- (void)asyncGetMessageListPopupViewStatus:(id /* block */)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void).cxx_destruct;

@end
