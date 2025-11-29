@class NSString, IESLiveFeedbackCardPKType;

@interface IESLiveAnchorFeedbackFragment : IESLiveRoomComponent <IESLiveFeedbackAction, HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveFeedbackCardPKType *feedbackCardPK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)onFeedbackStateChange:(long long)a0;
- (void)registMessage;
- (void)showCardWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
