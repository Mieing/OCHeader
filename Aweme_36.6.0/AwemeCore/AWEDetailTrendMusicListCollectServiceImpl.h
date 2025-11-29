@class NSString, DUXPopover, AWEDetailTrendViewModel;
@protocol AWEDetailMusicListViewModelProtocol, AWEDetailTrendTrackerService;

@interface AWEDetailTrendMusicListCollectServiceImpl : NSObject <AWEDetailMusicListCollectService>

@property (weak, nonatomic) id<AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (weak, nonatomic) id<AWEDetailTrendTrackerService> trendTrackerService;
@property (weak, nonatomic) AWEDetailTrendViewModel *trendViewModel;
@property (weak, nonatomic) DUXPopover *collectPopover;
@property (nonatomic) BOOL isMusicCollecting;
@property (nonatomic) BOOL shouldShowCollectHintAfterCollectFinish;
@property (nonatomic) BOOL enableShowToastAfterCollect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWitServiceProvider:(id)a0;
- (void)collectMusicWithActionSender:(id)a0;
- (void)removeCollectMusicHint;
- (id)p_detailCollectionBottomNoticeText;
- (void)p_collectMusicWithMusicItemViewModel:(id)a0 updateUIBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
