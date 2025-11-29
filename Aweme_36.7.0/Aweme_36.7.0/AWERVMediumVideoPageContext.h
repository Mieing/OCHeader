@class AWERVMediumVideoParamsModel, NSMutableArray, AWERelatedVideoMixVideoManager, AWEAwemeModel, AWERVDetailPageContext, AWEListDataController;
@protocol AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWERVMediumVideoPageContext : AWEPageContext

@property (weak, nonatomic) AWERVDetailPageContext *parentContext;
@property (retain, nonatomic) AWERVMediumVideoParamsModel *mediumVideoParams;
@property (nonatomic) long long videoSource;
@property (nonatomic) BOOL unfollowEntranceAuthor;
@property (retain, nonatomic) AWERelatedVideoMixVideoManager *mixVideoManager;
@property (nonatomic) BOOL exposedMixInfoIsShowing;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *subDataController;
@property (nonatomic) BOOL isDetailVCAppear;
@property (nonatomic) BOOL shouldSynPlaybackTimeWhenOut;
@property (nonatomic) BOOL noImmediatelyPlay;
@property (nonatomic) BOOL rewardPanelIsShowing;
@property (nonatomic) BOOL isFromCommentCountUpdate;
@property (retain, nonatomic) AWEAwemeModel *currentRecallVideoModel;
@property (nonatomic) BOOL hotVideoElementIsShowing;
@property (retain, nonatomic) NSMutableArray *hotHorizontalVideoDataArray;
@property (nonatomic) double commentHeightRatio;

- (id)nextHotHorizontalVideoModel;
- (void).cxx_destruct;
- (id)initWithParentContext:(id)a0;

@end
