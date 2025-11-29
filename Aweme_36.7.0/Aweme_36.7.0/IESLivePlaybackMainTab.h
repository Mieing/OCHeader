@class HTSEventContext, IESLivePlaybackMainTabTableView, NSArray, UIView, IESLiveWebpLoadingView, NSString, UILabel, HTSLiveEpisode;

@interface IESLivePlaybackMainTab : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLivePlaybackMainTabTableView *tableView;
@property (retain, nonatomic) UIView *networkError;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UIView *headerLucencyView;
@property (retain, nonatomic) UILabel *headerLucencyLabel;
@property (nonatomic) int headerLucencyViewTopOffset;
@property (copy, nonatomic) NSArray *playbackList;
@property (nonatomic) BOOL hasMoreForOtherPlaybacks;
@property (nonatomic) long long playingEpisodeID;
@property (copy, nonatomic) NSArray *lastIndexPathsForVisibleRows;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (copy, nonatomic) id /* block */ loadMoreCompletion;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didSelectItemBlock;
@property (copy, nonatomic) id /* block */ showBuyEntrance;
@property (copy, nonatomic) id /* block */ buyAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showNetworkError;
- (void)updateForVSPrivilegeWithRoomID:(long long)a0 purchased:(BOOL)a1;
- (void)fetchListWithCompletion:(id /* block */)a0;
- (id)loadingImageFooter;
- (void)disposeLoadingViewForLoadingState:(BOOL)a0;
- (void)customTrackVideoShowForVisibleCells;
- (void)selectCellWithEpisodeIDForPlaying:(long long)a0 scrollPosition:(long long)a1 completion:(id /* block */)a2;
- (void)loadLimitCountItemsWithCompletion:(id /* block */)a0 err:(id)a1 counter:(long long)a2;
- (void)loadMoreForOtherPlaybacksWithCompletion:(id /* block */)a0;
- (void)preloadVideoWithEpisodes:(id)a0;
- (id)showSubTitleWithSectionInfo:(id)a0 itemEpisode:(id)a1;
- (void)cell:(id)a0 updateForEpisode:(id)a1;
- (id)durationInfoWithEpisode:(id)a0;
- (long long)getNowSection;
- (void)trackVideoShowForItemAtIndexPath:(id)a0;
- (void)prepareInfo;
- (void)selectCellForPlayingEpisodeNeedScrollToIndex:(long long)a0 completion:(id /* block */)a1;
- (void)updateHeaderLucencyView;
- (void)updateHeaderLucencyViewForPortraitStream;
- (void)rePreloadVideo;
- (void)selectCellWithEpisodeIDForPlaying:(long long)a0;
- (void)trackVideoShowForVisibleCells;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setup;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithEpisode:(id)a0;

@end
