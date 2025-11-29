@class WCActionSheet, MPCommentEditView, NSString, MPShareWowEditView, NSMutableArray;

@interface MMWebViewPlugin_MPPageAction : MMWebViewPluginBase <MPCommentEditViewDelegate, MPShareWowEditViewDelegate, WCActionSheetDelegate, WXKeyBoardActiveReceiver>

@property (retain, nonatomic) MPCommentEditView *commentEditView;
@property (retain, nonatomic) MPShareWowEditView *wowRecommendEditView;
@property (retain, nonatomic) WCActionSheet *actionSheet;
@property (retain, nonatomic) NSMutableArray *preloadedWebStores;
@property (nonatomic) BOOL hasForcePortaitWhenCmtViewShow;
@property (nonatomic) BOOL hasIgnoreLongPressWhenCmtViewShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)showCommentEditViewWithTheme:(unsigned int)a0 params:(id)a1;
- (void)closeCommentEditView;
- (BOOL)isShowCommentEditView;
- (void)destoryCommentEditView;
- (void)showWowRecommendCommentEditViewWithTheme:(unsigned int)a0;
- (void)closeWowRecommendCommentEditView;
- (BOOL)isShowWowRecommendCommentEditView;
- (void)showToast:(id)a0 status:(id)a1;
- (unsigned int)getMPPageMenuShareFuncFlag;
- (void)onShareActionSheet;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onAddExcerptToFav:(id)a0 shareUrl:(id)a1 itemShowType:(unsigned int)a2 pageKey:(id)a3 title:(id)a4 name:(id)a5 cover:(id)a6 userName:(id)a7 icon:(id)a8;
- (void)onDelExcerptOnFav:(id)a0 excerptKeys:(id)a1 favId:(id)a2;
- (void)onOpenImmerseList:(id)a0 enterScene:(unsigned int)a1;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)initCommentEditViewWithTheme:(unsigned int)a0 params:(id)a1;
- (void)initWowRecommendEditViewWithTheme:(unsigned int)a0;
- (id)getMainViewController;
- (void)onDeleteEditViewCommentMsg:(id)a0;
- (void)onDeleteEditViewCommentReply:(id)a0 commentReply:(id)a1;
- (void)onCommentLikeClick:(unsigned int)a0 targetLikeStatus:(unsigned int)a1;
- (void)onReplyLikeClick:(unsigned int)a0 replyId:(unsigned int)a1 targetLikeStatus:(unsigned int)a2;
- (void)onCommentViewDissmiss:(id)a0;
- (void)onShareWowCommitBtnClick:(id)a0;
- (void)didTakeScreenshot;
- (void)addPreloadedWebStoresWithUrl:(id)a0 withAdItem:(id)a1;
- (void)removePreloadedWebStores;
- (id)supportMessageTypes;
- (unsigned int)activeScene;
- (void)sendMessage:(id)a0;
- (void)inputWXKBEmoticon:(id)a0;
- (void)inputWXKBImage:(id)a0;
- (void)sendWXKBEvent:(id)a0;
- (void).cxx_destruct;

@end
