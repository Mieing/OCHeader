@class NSString;

@interface AFDFastReplyService : HTSService <AFDFastReplyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fastReplyTriggerRule;
- (id)socialReverseBtnInScene:(id)a0;
- (id)inputViewContainerWithInputViewMode:(id)a0 context:(id)a1 viewController:(id)a2;
- (Class)fastReplyStrategyManager;
- (void)registerFastReplyItem:(id /* block */)a0;
- (id)fullScreenEmojiAnimationFromImage:(id)a0;
- (BOOL)isDormantWithAweme:(id)a0;
- (void)addCountWithAweme:(id)a0;
- (void)resetWithAweme:(id)a0;
- (id)fastReplyInputViewMode;
- (Class)fastReplyStrategyUtils;
- (Class)quickReplyManager;
- (BOOL)isFastReplyRefactorEnable:(id)a0;
- (id)fastReplyViewWithConfiguration:(id)a0;
- (id)feedButtonManagerPageList;

@end
