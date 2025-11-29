@class AWECommentInputViewConfigModel, AWESearchCommentCustomBottomBar, NSDictionary, NSMutableArray;
@protocol AWECommentInputViewContextProtocol, AWECommentInputViewManagerProtocol;

@interface AWECommentBottomBarHolder : AWESearchResultVerticalBottomBarHolder

@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (retain, nonatomic) id<AWECommentInputViewContextProtocol> commentContext;
@property (retain, nonatomic) AWESearchCommentCustomBottomBar *customedBottomBar;
@property (retain, nonatomic) NSMutableArray *sendedCommentCid;
@property (retain, nonatomic) AWECommentInputViewConfigModel *inputConfig;
@property (copy, nonatomic) NSDictionary *logExtra;

- (id)commentContextWithGroupID:(id)a0;
- (id)getCommentInputViewManagerFromContext:(id)a0;
- (void)clearSendedCommentCid;
- (long long)getServiceIdInteger;
- (id)getLogExtraFromModel;
- (void)updateContainerClientExtra:(id)a0;
- (void)insertPublishComment:(id)a0 completion:(id /* block */)a1;
- (void)handleCommentPanelShowNotification:(id)a0;
- (id)getBottomBarView;
- (void)handleCommentInput:(id)a0;
- (id)p_buildLynxCardWithComment:(id)a0;
- (id)p_buildNativeCardWithComment:(id)a0;
- (void)showCommentInputPanelWithLogExtra:(id)a0;
- (void)dismissCommentInputPanel;
- (void).cxx_destruct;
- (id)init;
- (void)dismissKeyboard;
- (id)getGroupId;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
