@class HTSLiveToolbarItem, NSString;

@interface IESLivePlaybackPaidTicketFragment : IESLivePlaybackComponent <IESLivePlaybackChangeStreamAction, IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (id)commonParams;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)loadToolbarItem;
- (void)streamChangedWithEpisode:(id)a0;
- (void)tapPaidTicketItem;
- (void)trackMoudleShow;
- (void).cxx_destruct;
- (void)removeToolbarItem;

@end
