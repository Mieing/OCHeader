@class UIButton, NSString;
@protocol AWEProfileBottomBubbleViewProtocol;

@interface AWEProfileBottomBubbleComponent : AWEUserDetailBaseComponent <AFDProfileMessage, AWEUserMessage>

@property (retain, nonatomic) UIButton<AWEProfileBottomBubbleViewProtocol> *bottomBubble;
@property (nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didFinishDiggProfileWithUser:(id)a0 isDigged:(BOOL)a1 error:(id)a2;
- (void)setUpBottomView;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)updateViewWithUser:(id)a0;
- (void)onButtonTapped;
- (void)playTapAnimation;
- (void).cxx_destruct;
- (id)user;
- (id)containerView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)bottomViewText;

@end
