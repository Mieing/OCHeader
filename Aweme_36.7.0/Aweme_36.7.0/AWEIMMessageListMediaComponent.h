@class UIView, NSString, AWEIMMessageDetailManager;

@interface AWEIMMessageListMediaComponent : AWEIMComponentBase <AWEIMMessageListMediaInterface, AWEIMMessageDetailManagerDelegate>

@property (retain, nonatomic) AWEIMMessageDetailManager *messageDetailManager;
@property (weak, nonatomic) UIView *fromView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (id)messageListVC;
- (void)p_viewDidAppear;
- (id)baseVC;
- (void)showMediaListWithContext:(id)a0 requestScene:(id)a1 completion:(id /* block */)a2;
- (void)showMediaListWithCell:(id)a0 message:(id)a1 extraParams:(id)a2 requestScene:(id)a3;
- (void)showMediaListWithCell:(id)a0 message:(id)a1 extraParams:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
- (void)showSingleMediaWithContext:(id)a0 requestScene:(id)a1;
- (void)showMessageDetailWithMessage:(id)a0 requestScene:(id)a1;
- (void)showMessageDetailWithOriginMessage:(id)a0 requestScene:(id)a1;
- (void)showMediaListWithCell:(id)a0 message:(id)a1 requestScene:(id)a2;
- (void)showMediaWithMessage:(id)a0 cell:(id)a1 shouldShowComment:(BOOL)a2 requestScene:(id)a3;
- (void)showSingleMediaWithCell:(id)a0 targetMessage:(id)a1 requestScene:(id)a2;
- (id)getMediaEntranceVieWController;
- (void)messageDetailManager:(id)a0 willSelectedOriginMessage:(id)a1 requestScene:(id)a2;
- (void)messageDetailManager:(id)a0 showSpecialMessage:(id)a1;
- (void)__messageDetailtrackerWithMessage:(id)a0;
- (void)messageDetailManager:(id)a0 showCardWithWithMessage:(id)a1 requestScene:(id)a2;
- (void)messageDetailManager:(id)a0 showMediaWithMessage:(id)a1 shouldShowComment:(BOOL)a2 requestScene:(id)a3;
- (void)messageDetailManager:(id)a0 showImageVideoControllerWithMessages:(id)a1 currentIndex:(long long)a2 requestScene:(id)a3;
- (void)messageDetailManager:(id)a0 showMediaWithMessage:(id)a1 shouldShowChapterPanel:(BOOL)a2 requestScene:(id)a3;
- (id)p_getMediaEntranceVieWController;
- (void)p_showSingleMediaWithCell:(id)a0 targetMessage:(id)a1 requestScene:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)conversation;

@end
