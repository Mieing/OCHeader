@class NSString, AWELunaUgPopView, AWEDetailTrendViewModel;
@protocol AWEDetailMusicListViewModelProtocol;

@interface AWEDetailTrendMusicListLunaServiceImpl : NSObject <AWEDetailMusicListLunaService>

@property (weak, nonatomic) id<AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (weak, nonatomic) AWEDetailTrendViewModel *trendViewModel;
@property (retain, nonatomic) AWELunaUgPopView *lunaUgPopView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWitServiceProvider:(id)a0;
- (void)tapLunaUGButtonWithViewModel:(id)a0 commonParams:(id)a1;
- (void)tapLunaUGButtonWithActionSender:(id)a0;
- (void)jumpToMiniLunaWithActionSender:(id)a0;
- (void)tapLunaAppendPlaylistWithActionSender:(id)a0;
- (void)p_updateAppendPlaylistButtonCollected:(id)a0;
- (id)p_createLunaDiversionPublicParamsWithMusicItemViewModel:(id)a0;
- (id)p_configGradientColor:(id)a0;
- (void).cxx_destruct;

@end
