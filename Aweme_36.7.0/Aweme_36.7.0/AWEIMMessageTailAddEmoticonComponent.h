@class NSString;

@interface AWEIMMessageTailAddEmoticonComponent : AWEIMFlexComponent <AWEIMMessageStateUIAction>

@property (copy, nonatomic) NSString *targetMsgId;
@property (nonatomic) BOOL hasTrackShown;
@property (nonatomic) BOOL shouldForbideTrackShown;
@property (nonatomic) BOOL isCellVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isSpecifiedGiphyMessage:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)p_addObserver;
- (void)p_trackShow;
- (void)p_addKVO;
- (void)p_createPresenterIfNeeded;
- (void)p_removeObserver;
- (void)messageStateViewModelDidChanged;
- (BOOL)p_canShowAddEmoticonBtn;
- (void)p_updatePresenterWithReload:(BOOL)a0;
- (void)handleEmoticonPanelDataChangedNotification:(id)a0;
- (void)p_didTapAddEmoticonButton;
- (void).cxx_destruct;

@end
