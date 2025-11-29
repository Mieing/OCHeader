@class MMBGMSelectedContentView, MMBGMSelectedBottomView, MMBGMPanelPublishContext, NSString, MMBGMSelectedConfig;
@protocol MMBGMSelectedViewDelegate;

@interface MMBGMSelectedView : MMUIView <MMBGMSelectedBottomViewDelegate, MMBGMSelectedContentViewDelegate>

@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (retain, nonatomic) MMBGMSelectedContentView *topContentView;
@property (retain, nonatomic) MMBGMSelectedBottomView *bottomView;
@property (weak, nonatomic) id<MMBGMSelectedViewDelegate> delegate;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tabModel:(id)a1 config:(id)a2 delegate:(id)a3;
- (void)setupDataReport;
- (id)genReportDict;
- (void)setupWithtabModel:(id)a0 config:(id)a1;
- (void)layoutSubviews;
- (void)addMusicData:(id)a0 toIndex:(unsigned long long)a1;
- (void)findAndSetMusicPlaying:(id)a0;
- (unsigned long long)currentSelectedTabIndex;
- (void)selectMusicAtTabIndex:(unsigned long long)a0 index:(unsigned long long)a1;
- (void)setAllCellUnSelected;
- (void)switchToTabIndex:(unsigned long long)a0;
- (void)bgmSelectedViewDidShow;
- (void)bgmSelectedViewDidClose;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicOfCurrentTabIfNeeded;
- (void)addSearchSelectedResultIfNeed;
- (BOOL)isMusicOn;
- (BOOL)isOriginSoundSelected;
- (BOOL)isLyricOn;
- (void)manualSetMusicOn:(BOOL)a0;
- (void)manualSetOstOn:(BOOL)a0;
- (void)manualSetLyricOn:(BOOL)a0;
- (id)currentMusicData;
- (id)genMusicSelectedResult;
- (void)setBgmViewShow;
- (BOOL)startFocusFeedCellPlaying;
- (BOOL)stopFocusFeedCellPlaying;
- (void)onBGMSelectedBottomView:(id)a0 didClickOstBtn:(id)a1;
- (void)onBGMSelectedBottomView:(id)a0 didClickMusicOnBtn:(id)a1;
- (void)onBGMSelectedBottomView:(id)a0 didClickLyricOnBtn:(id)a1;
- (void)bgmSelectedContentViewDidSelectedMusic:(id)a0 atTabIndex:(unsigned long long)a1 index:(unsigned long long)a2 isTriggerByTap:(BOOL)a3;
- (void)bgmSelectedContentViewDidEditMusic:(id)a0 atTabIndex:(unsigned long long)a1 index:(unsigned long long)a2;
- (id)bgmSelectedContentView:(id)a0 willSelectMusic:(id)a1 indexPath:(id)a2 tabIndex:(unsigned long long)a3;
- (void)bgmSelectedContentView:(id)a0 willShowMusic:(id)a1 tabIndex:(unsigned long long)a2 musicIndex:(unsigned long long)a3;
- (void)bgmSelectedContentViewDidClickSearchBar:(id)a0;
- (void)bgmSelectedContentView:(id)a0 didSearchWithKey:(id)a1;
- (void)bgmSelectedContentViewDidCloseSearchView:(id)a0 latestSelectedMusic:(id)a1;
- (BOOL)bgmSelectedContentViewGetMusicState:(id)a0;
- (unsigned long long)bgmSelectedContentViewGetMaterialDuration:(id)a0;
- (BOOL)bgmSelectedContentViewIsShowing:(id)a0;
- (void)bgmSelectedContentViewWillStartPlayingVideo:(id)a0;
- (void)bgmSelectedContentViewWillStopPlayingVideo:(id)a0;
- (void).cxx_destruct;

@end
