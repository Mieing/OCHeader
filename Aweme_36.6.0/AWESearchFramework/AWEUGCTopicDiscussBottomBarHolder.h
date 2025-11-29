@class AWESearchTracker, AWECommentInputViewConfigModel, AWESearchCachalotVerticalBottomBarConfigModel, AWEUGCTopicDiscussShotCommentBottomBarView, NSMutableArray;
@protocol AWESearchVerticalServiceProtocol, AWECommentInputViewManagerProtocol, AWECommentInputViewContextProtocol, AWEUGCTopicServiceProtocol;

@interface AWEUGCTopicDiscussBottomBarHolder : AWESearchResultVerticalBottomBarHolder

@property (retain, nonatomic) AWESearchCachalotVerticalBottomBarConfigModel *model;
@property (retain, nonatomic) AWEUGCTopicDiscussShotCommentBottomBarView *customedBottomBar;
@property (weak, nonatomic) id<AWEUGCTopicServiceProtocol, AWESearchVerticalServiceProtocol> ugcService;
@property (retain, nonatomic) id<AWECommentInputViewContextProtocol> commentContext;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (retain, nonatomic) NSMutableArray *sendedCommentCid;
@property (retain, nonatomic) AWECommentInputViewConfigModel *inputConfig;
@property (retain, nonatomic) AWESearchTracker *tracker;

- (id)commentContextWithGroupID:(id)a0;
- (id)getCommentInputViewManagerFromContext:(id)a0;
- (long long)getServiceIdInteger;
- (id)getLogExtraFromModel;
- (void)updateContainerClientExtra:(id)a0;
- (id)getBottomBarView;
- (void)handleCommentInput:(id)a0;
- (id)getLogWithCommentId:(id)a0;
- (id)p_commonTrackerParams;
- (void)handleShootPublishClick;
- (id)findTopicDiscussSelectTabCardViewModel;
- (void)p_trackDidSendComment;
- (void)p_trackClickCommentBar;
- (void).cxx_destruct;
- (id)init;
- (id)getGroupId;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
