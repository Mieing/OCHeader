@class NSArray, AWEMixVideoModel, UITableView;

@interface AWEMixVideoEpisodeSegmentDataRepository : NSObject {
    void /* unknown type, empty encoding */ feedViewModel;
    void /* unknown type, empty encoding */ missingEpisodeIds;
    void /* unknown type, empty encoding */ episodes;
    void /* unknown type, empty encoding */ _videoPanelArray;
    void /* unknown type, empty encoding */ needRecreateVideoPanelArray;
    void /* unknown type, empty encoding */ currentEpisode;
    void /* unknown type, empty encoding */ isRequestOnAir;
    void /* function */ currentMixInfoBlock;
    void /* function */ currentSegmentEpisodeIdBlock;
    void /* function */ currentTableViewBlock;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) AWEMixVideoModel *currentMixInfo;
@property (nonatomic, readonly) NSArray *videoPanelArray;
@property (nonatomic, copy) id /* block */ currentMixInfoBlock;
@property (nonatomic, copy) id /* block */ currentSegmentEpisodeIdBlock;
@property (nonatomic, copy) id /* block */ currentTableViewBlock;

- (void)setupHeader;
- (void)refreshOriginVideoPanelArray;
- (void)synchronizeToViewModelWith:(id)a0;
- (void)loadMore;
- (void)rebindMixVideoEpisodes;
- (void)checkMissingEpisodesWith:(id)a0;
- (BOOL)dataNeedRequestWith:(long long)a0;
- (void)bindWithFeedViewModel:(id)a0;
- (void)setupBindDataBlock;
- (long long)rightIndexOf:(long long)a0;
- (long long)leftIndexOf:(long long)a0;
- (void)updateDataForSegmentWith:(long long)a0;
- (void)loadMoreForSegmentFromEpisode:(long long)a0 completion:(id /* block */)a1;
- (void)loadPrevious;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)init;

@end
