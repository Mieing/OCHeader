@class NSTimer, AWEIMMessageTabDisconnectedTipView, NSString;
@protocol AWEIMChatListHeaderInterface, AWEIMTabSkeletonInterface;

@interface AWEIMMessageTabDisconnectedTipComponent : AWEIMComponentBase <AWEIMChatListHeaderProvider, AWEIMMessageTabDisconnectedTipInterface>

@property (retain, nonatomic) AWEIMMessageTabDisconnectedTipView *tipView;
@property (weak, nonatomic) id<AWEIMChatListHeaderInterface> headerService;
@property (nonatomic) BOOL canShow;
@property (retain, nonatomic) NSTimer *showTimer;
@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabSkeletonService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)canShowCurrentHeader;
- (id)headerViewForChatList;
- (void)updateShowState:(BOOL)a0;
- (void)p_refreshTip:(BOOL)a0;
- (void).cxx_destruct;
- (id)trackIdentifier;
- (void)dealloc;

@end
