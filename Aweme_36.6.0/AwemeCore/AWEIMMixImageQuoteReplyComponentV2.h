@class AWEIMMessage, NSString, AWEIMMixImageMessageViewModel;

@interface AWEIMMixImageQuoteReplyComponentV2 : AWEIMMixImageContentComponentV2 <AWEIMMixImageContentAction>

@property (retain, nonatomic) AWEIMMessage *originMessage;
@property (retain, nonatomic) AWEIMMixImageMessageViewModel *originMessageViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)viewControllerLifeCycleChanged:(unsigned long long)a0;
- (void)p_refreshData;
- (void)showMediaDetail;
- (id)specializedViewModel;
- (void)configPropsWithMessage;
- (void)updatePropsWithMessage;
- (void)messageStatusDidUpdatedWithMessage:(id)a0;
- (void)p_reloadAvatars;
- (void)p_updateQuotedContentPropsDelayCoverHide:(BOOL)a0;
- (void)p_bindQuotedMessageVM;
- (void)p_didTapQuotedCoverAction;
- (void)p_refreshWithOriginMessage:(id)a0 firstConfig:(BOOL)a1;
- (void)p_loadDetailMessageFrom:(id)a0 refreshBlock:(id /* block */)a1;
- (void)p_refreshImageDataIfNeeded;
- (BOOL)p_onFinalUIStatus;
- (void)p_refreshQuotedData;
- (void).cxx_destruct;
- (id)displayMessage;

@end
