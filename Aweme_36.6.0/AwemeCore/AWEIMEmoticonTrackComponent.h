@protocol AWEIMEmoticonPanelSyncComponent;

@interface AWEIMEmoticonTrackComponent : AWEIMComponentBase

@property (weak, nonatomic) id<AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (nonatomic) BOOL trackParamsOpt;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)trackCurrentEmoticonPanelShowingEmoticons;
- (void)trackSingleEmoticonShowAtIndexPath:(id)a0 emoticonModel:(id)a1 themeModel:(id)a2 trackedEmoticonShowedIDs:(id)a3;
- (void)trackEmoticonClickAtIndexPath:(id)a0 emoticonModel:(id)a1 themeModel:(id)a2 extraParams:(id)a3;
- (id)trackParamsWithEmoticonModel:(id)a0 themeModel:(id)a1 trackedEmoticonShowedIDs:(id)a2 indexPath:(id)a3;
- (void)p_trackSingleEmoticonShowAtIndexPath:(id)a0 emoticonModel:(id)a1 themeModel:(id)a2 trackedEmoticonShowedIDs:(id)a3;
- (void).cxx_destruct;

@end
