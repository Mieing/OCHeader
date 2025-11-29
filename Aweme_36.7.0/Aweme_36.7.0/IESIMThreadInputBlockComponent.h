@class IESIMInputBlockView, NSString;
@protocol IESIMThreadRootMessageInterface, IESIMThreadInterface, AWEIMGroupBlockInteractorInterface, AWEIMMessageListFooterInterface, AWEIMMessageListInputModuleInterface;

@interface IESIMThreadInputBlockComponent : AWEIMComponentBase <AWEIMMessageListBackgroundAction, IESIMThreadInputBlockInterface>

@property (nonatomic) BOOL isBlocked;
@property (retain, nonatomic) IESIMInputBlockView *blockView;
@property (weak, nonatomic) id<AWEIMMessageListFooterInterface> footerService;
@property (weak, nonatomic) id<AWEIMMessageListInputModuleInterface> inputService;
@property (weak, nonatomic) id<IESIMThreadRootMessageInterface> threadRootMsgService;
@property (weak, nonatomic) id<IESIMThreadInterface> parentTransferService;
@property (weak, nonatomic) id<AWEIMGroupBlockInteractorInterface> parentBlockService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)themeDidReload;
- (void)p_updateInputBlockViewBackground;
- (void)p_updateBlockIfNeed;
- (id)p_blockStringWithTimeInterval:(double)a0;
- (id)p_updateWithBlockText;
- (id)p_threadBlockedDescription;
- (void)p_updateWithBlock:(BOOL)a0 blockedString:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
