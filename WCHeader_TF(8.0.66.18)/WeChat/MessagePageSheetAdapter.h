@class MessagePageSheetTransition, NSString, CMessageWrap, BaseMsgContentViewController, UIViewController;
@protocol MessagePageSheetAdapterDelegate;

@interface MessagePageSheetAdapter : MMPageSheetAdapter <MMPageSheetAdapterDelegate, MMUIViewControllerExt>

@property (weak, nonatomic) id<MessagePageSheetAdapterDelegate> bizDelegate;
@property (weak, nonatomic) BaseMsgContentViewController *msgVC;
@property (retain, nonatomic) UIViewController *hostViewController;
@property (retain, nonatomic) MessagePageSheetTransition *presentTransition;
@property (nonatomic) BOOL markUnreadAtClose;
@property (nonatomic) BOOL isPageSheetPresented;
@property (retain, nonatomic) NSString *currUsername;
@property (readonly, nonatomic) id<MessagePageSheetAdapterDelegate> delegate;
@property (retain, nonatomic) CMessageWrap *jumpTargetMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterWithMsgViewController:(id)a0;

- (void)setDelegate:(id)a0;
- (id)init;
- (void)dealloc;
- (double)pageSheetContentWidth;
- (void)pageSheetWillAppear:(id)a0;
- (void)pageSheetWillClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetDidDisappear:(id)a0;
- (void)pageSheetDidAppear:(id)a0;
- (void)pageSheetDidClose:(id)a0 closeType:(long long)a1;
- (void)pageSheetPresentWillBegin:(id)a0;
- (void)pageSheetWillBePresentFrom:(id)a0 inContainer:(id)a1;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
