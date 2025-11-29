@class AWEAwemeModel, AFDRichAwemeFullPageContext, UIView, AFDRichAwemeFullPageAnchorViewModel, AFDFullPageRecommendWordView, AFDRichAwemeFullPageAnchorModel, YYLabel, AFDRichAwemeFullPageAnchorContainerView;
@protocol AWEFullPageGoodsAnchorViewProtocol;

@interface AFDRichAwemeFullPageAnchorHeaderView : UIView

@property (retain, nonatomic) AFDRichAwemeFullPageAnchorContainerView *anchorContainerView;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorModel *musicAnchorModel;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorModel *extraAnchorModel;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorViewModel *viewModel;
@property (retain, nonatomic) YYLabel *timeLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AFDRichAwemeFullPageContext *context;
@property (retain, nonatomic) UIView<AWEFullPageGoodsAnchorViewProtocol> *goodsAnchorView;
@property (nonatomic) BOOL isSearchSugStyleComment;
@property (nonatomic) double goodCardHeight;
@property (readonly, nonatomic) BOOL hasNoAnchor;
@property (nonatomic) BOOL isSearchWordAvailable;
@property (retain, nonatomic) AFDFullPageRecommendWordView *searchWordView;

- (void)updateDataWithModel:(id)a0 context:(id)a1;
- (BOOL)shouldDisableTransitionPanGestureRecognizer:(id)a0;
- (BOOL)isFollowStatusFriends:(id)a0;
- (void)configAnchorContainerView;
- (void)addTimeLabelWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;

@end
