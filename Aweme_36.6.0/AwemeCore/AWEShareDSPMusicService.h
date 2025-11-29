@class AWEMiniLunaShareModel, AWEShareListPanel, NSDictionary, AWEMusicModel, AWEAwemeModel, NSString;

@interface AWEShareDSPMusicService : AWEShareCommonImpl <AWEShareDSPMusic>

@property (retain, nonatomic) AWEMusicModel *music;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEMiniLunaShareModel *miniLunaShareModel;
@property (retain, nonatomic) AWEShareListPanel *sharePanel;
@property (retain, nonatomic) NSDictionary *extraLogInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicCardShareChannels;

- (id)contextWithAweme:(id)a0;
- (id)musicCardShareContextWithAweme:(id)a0;
- (id)contextWithLunaShareModel:(id)a0 isMusicCard:(BOOL)a1 extraInfo:(id)a2;
- (void)closeSharePanel;
- (void)showPanelWithDSPMedia:(id)a0 extraLogInfo:(id)a1 onViewController:(id)a2;
- (id)showPanelWithMiniLunaShareModel:(id)a0 extraInfo:(id)a1 onViewController:(id)a2;
- (id)contextWithMusic:(id)a0;
- (id)taskWithMedia:(id)a0;
- (id)taskWithMiniLunaShareModel:(id)a0;
- (id)configurationWithMedia:(id)a0;
- (id)configurationWithMiniLunaShareModel:(id)a0;
- (id)musicCardShareModelWithAweme:(id)a0;
- (void).cxx_destruct;

@end
