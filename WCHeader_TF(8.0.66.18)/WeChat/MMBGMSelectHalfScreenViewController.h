@class UIColor, NSString, MMBGMPanelPublishContext, MMBGMSelectedView, NSMutableArray, MMBGMSelectedConfig;
@protocol MMBGMSelectHalfScreenViewControllerDelegate;

@interface MMBGMSelectHalfScreenViewController : MMPageSheetBaseViewController <MMBGMSelectedViewDelegate>

@property (retain, nonatomic) MMBGMSelectedView *musicView;
@property (retain, nonatomic) NSMutableArray *tabModels;
@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (nonatomic) BOOL isShowingInView;
@property (weak, nonatomic) id<MMBGMSelectHalfScreenViewControllerDelegate> delegate;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;
@property (nonatomic) unsigned long long entranceType;
@property (retain, nonatomic) UIColor *maskBackgroundColor;
@property (nonatomic) BOOL useIphoneUIStyleInIpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)startFocusFeedCellPlaying;
- (BOOL)stopFocusFeedCellPlaying;
- (unsigned long long)bgmStartPlayTimeStamp;
- (void)setBgmStartPlayTimeStamp:(unsigned long long)a0;
- (void)markBGMVCShow;
- (void)markBGMVCClose;
- (void)markBGMVCChangeMusic;
- (void)reportWithMudicData:(id)a0 tabIndex:(unsigned long long)a1 duration:(unsigned long long)a2;
- (id)initWithTabModel:(id)a0 config:(id)a1;
- (void)viewDidLoad;
- (BOOL)isMusicOn;
- (BOOL)isOriginSoundSelected;
- (BOOL)isLyricOn;
- (void)manualSetMusicOn:(BOOL)a0;
- (void)manualSetOstOn:(BOOL)a0;
- (void)manualSetLyricOn:(BOOL)a0;
- (void)addMusicData:(id)a0 toIndex:(unsigned long long)a1;
- (void)findAndSetMusicPlaying:(id)a0;
- (id)genMusicSelectedResult;
- (id)currentMusicData;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)pageSheetDidChangeVisibleHeight:(double)a0;
- (void)setBgmViewShow;
- (unsigned long long)currentSelectedTabIndex;
- (void)selectMusicAtTabIndex:(unsigned long long)a0 index:(unsigned long long)a1;
- (void)setAllCellUnSelected;
- (void)switchToTabIndex:(unsigned long long)a0;
- (void)showInView:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)bgmSelectedViewDidSelectedMusic:(id)a0 atTabIndex:(unsigned long long)a1 index:(unsigned long long)a2 isTriggerByTap:(BOOL)a3;
- (void)bgmSelectedViewDidEditMusic:(id)a0 atTabIndex:(unsigned long long)a1 index:(unsigned long long)a2;
- (id)bgmSelectedView:(id)a0 willSelectMusic:(id)a1 indexPath:(id)a2 tabIndex:(unsigned long long)a3;
- (void)bgmSelectedView:(id)a0 willShowMusic:(id)a1 tabIndex:(unsigned long long)a2 musicIndex:(unsigned long long)a3;
- (void)bgmSelectedViewDidClickSearchBar:(id)a0;
- (void)bgmSelectedView:(id)a0 didSearchWithKey:(id)a1;
- (void)bgmSelectedViewDidClickMusicOnBtn:(BOOL)a0;
- (void)bgmSelectedViewDidClickLyricOnBtn:(BOOL)a0;
- (void)bgmSelectedViewDidClickOstOnBtn:(BOOL)a0;
- (void)bgmSelectedViewDidCloseSearchView:(id)a0 latestSelectedMusic:(id)a1;
- (unsigned long long)bgmSelectedViewGetMaterialDuration:(id)a0;
- (BOOL)bgmSelectedViewIsShowing:(id)a0;
- (void)bgmSelectedViewWillStartPlayingVideo:(id)a0;
- (void)bgmSelectedViewWillStopPlayingVideo:(id)a0;
- (id)getSecondCutPromotionMaskView;
- (void).cxx_destruct;

@end
