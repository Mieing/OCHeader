@class HTSLiveToolbarItem, IESLivePlaybackReportStore, NSString;

@interface IESLivePlaybackReportFragment : IESLivePlaybackComponent <IESLivePlaybackReportAction>

@property (retain, nonatomic) IESLivePlaybackReportStore *store;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentDidMount;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)reportComment:(id)a0 contentId:(id)a1 agreeMsgId:(id)a2 commentType:(id)a3 sender:(id)a4 source:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)reportWebCommentWithParams:(id)a0 source:(unsigned long long)a1;
- (void)reportRoom:(unsigned long long)a0;
- (void)reportUser:(id)a0 source:(unsigned long long)a1;
- (void)updateReportToolbarItem:(long long)a0;
- (void)loadReportToolbarItem;
- (void)removeReportToolbarItem;
- (void).cxx_destruct;

@end
