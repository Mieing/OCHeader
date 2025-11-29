@class AWECommentInputViewConfigModel, NSMutableArray, AWESearchCommentCustomBottomBar;
@protocol AWECommentInputViewContextProtocol, AWECommentInputViewManagerProtocol;

@interface AWEHotspotDiscussBottomBarHolder : AWESearchResultVerticalBottomBarHolder

@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (retain, nonatomic) NSMutableArray *sendedCommentCid;
@property (retain, nonatomic) AWECommentInputViewConfigModel *inputConfig;
@property (retain, nonatomic) AWESearchCommentCustomBottomBar *customedBottomBar;
@property (retain, nonatomic) id<AWECommentInputViewContextProtocol> commentContext;

- (id)commentContextWithGroupID:(id)a0;
- (id)getCommentInputViewManagerFromContext:(id)a0;
- (void)clearSendedCommentCid;
- (long long)getServiceIdInteger;
- (id)getLogExtraFromModel;
- (void)updateContainerClientExtra:(id)a0;
- (id)getBottomBarView;
- (void)handleCommentInput:(id)a0;
- (void)showCommentInputPanelWithLogExtra:(id)a0;
- (void)dismissCommentInputPanel;
- (void)bottomBarInputAreaClicked;
- (id)getLogWithCommentId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dismissKeyboard;
- (id)getGroupId;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
