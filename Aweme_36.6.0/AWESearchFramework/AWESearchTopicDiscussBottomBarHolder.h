@class AWESearchCachalotVerticalBottomBarConfigModel, AWESearchTopicDiscussShotCommentBottomBarView;
@protocol AWEUGCTopicServiceProtocol, AWESearchVerticalServiceProtocol;

@interface AWESearchTopicDiscussBottomBarHolder : AWESearchResultVerticalBottomBarHolder

@property (retain, nonatomic) AWESearchCachalotVerticalBottomBarConfigModel *model;
@property (retain, nonatomic) AWESearchTopicDiscussShotCommentBottomBarView *customedBottomBar;
@property (weak, nonatomic) id<AWEUGCTopicServiceProtocol, AWESearchVerticalServiceProtocol> ugcService;

- (id)getBottomBarView;
- (void)handleCommentClick;
- (void)handleShootPublishClick;
- (id)findTopicDiscussSelectTabCardViewModel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
