@class NSDictionary, NSString;

@interface AWEIMNewcomerReportInteractor : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMMessageAddLocalMessageInteractorDelegate, AWEIMNewcomerReportInteractorInterface>

@property (copy, nonatomic) NSDictionary *newcomerReportInfo;
@property (nonatomic) BOOL enableAddLocalMessage;
@property (nonatomic) BOOL didInsertLocalCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableWithIESCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (id)vcParent;
- (void)didFetchMsgAndEnableAddLocalMsg;
- (void)__tryInserdNewcomerReportCardMessage;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
