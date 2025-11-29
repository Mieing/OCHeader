@class NSString, AWEButtonTextInfoModel, NSTimer, AWEPageContext, AWECommonButtonInfoModel, AWEPlayInteractionBottomButtonCommentEntranceView, UIViewController;
@protocol AWECommentInputViewManagerProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol, AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionBottomButtonCommentEntranceComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) id<AWEPlayInteractionContextProtocol> context;
@property (retain, nonatomic) AWEButtonTextInfoModel *commentEntranceModel;
@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonCommentEntranceView *commentView;
@property (retain, nonatomic) UIViewController<AWECommentInputViewManagerProtocol> *inputManager;
@property (copy, nonatomic) id /* block */ commentHandler;
@property (nonatomic) long long stay;
@property (retain, nonatomic) NSTimer *commentDelayTimer;
@property (nonatomic) BOOL hasBeginTimer;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (void)p_shouldExposedComment:(BOOL)a0 context:(id)a1;
+ (void)p_exposedCommentFailed:(id)a0 context:(id)a1 hot:(BOOL)a2;
+ (void)p_setCommonField:(id)a0 context:(id)a1;

- (void)hideBottomButton;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (void)viewController_willDisplay;
- (void)handleButtonClick;
- (void)setIsInner:(id)a0;
- (void)appendCommentTrackParams;
- (void)p_destroyTimer;
- (void)p_exposedComment:(BOOL)a0;
- (void)showBottomButton;
- (void)p_commentDelayTimer;
- (void).cxx_destruct;
- (void)reset;
- (id)buttonView;

@end
