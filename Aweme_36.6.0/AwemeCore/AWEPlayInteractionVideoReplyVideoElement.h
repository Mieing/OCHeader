@class NSString, UIView;
@protocol AWEFeedSameStyleShootViewProtocol;

@interface AWEPlayInteractionVideoReplyVideoElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEFeedSameStyleShootViewProtocol> *redButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldShowWithContext:(id)a0;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)p_didClickRedButton;
- (BOOL)shouldShowVideoReplyVideoView;
- (BOOL)enableStudioComment;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
