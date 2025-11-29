@class WCFinderTemplateVideoEditViewModel, NSString, WCFinderTemplateMusicSelectEntranceView, UIImageView, UIImage, WCFinderMusicSelectView;
@protocol WCFinderTemplateVideoEditVCDelegate;

@interface WCFinderTemplateVideoEditViewController : MMUIViewController <WCFinderTemplateMusicSelectEntranceViewDelegate, WCFinderMusicSelectViewDelegate, WCFinderMusicSelectViewDataSource, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderTemplateVideoEditViewModel *viewModel;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *selectedMusicId;
@property (retain, nonatomic) WCFinderTemplateMusicSelectEntranceView *musicEntranceView;
@property (retain, nonatomic) WCFinderMusicSelectView *musicView;
@property (retain, nonatomic) UIImageView *backgroundImgView;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic, getter=isExporting) BOOL exporting;
@property (copy, nonatomic) NSString *traceId;
@property (nonatomic) unsigned long long eventId;
@property (weak, nonatomic) id<WCFinderTemplateVideoEditVCDelegate> delegate;
@property (retain, nonatomic) UIImage *backGroundThumbImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAssetInfos:(id)a0 templateId:(id)a1 musicId:(id)a2 eventId:(unsigned long long)a3 firstVideoPath:(id)a4;
- (void)viewDidLoad;
- (id)getReportExtInfoWithTemplateId:(id)a0;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)createTemplateVideo;
- (void)setupBackGroundView;
- (void)setupBackGroundImage;
- (void)setupMusicUI;
- (double)getMusicEntranceViewBottom;
- (double)getMusicViewBottom;
- (void)updateMusicUI;
- (void)setupCancelBtn;
- (void)setupNavigationUI;
- (void)onDone;
- (void)onCancel;
- (void)updateOptions;
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (void)finderTemplateMuiscViewDidClickCloseBtn;
- (void)finderTemplateMuiscViewDidClickOstBtn;
- (void)finderTemplateMuiscViewDidClickMusic;
- (void)finderTemplateMuiscViewDidChangeToANewIndex:(unsigned long long)a0;
- (id)finderTemplateMuiscViewGetViewController;
- (void)finderTemplateMusicViewDidStartSearchMusic;
- (void)finderTemplateMusicViewDidCancelSearchMusic;
- (void)finderTemplateMusicViewDidAddMusicFromSearchModel:(id)a0;
- (unsigned long long)musicCount;
- (id)musicDataAtIndex:(unsigned long long)a0;
- (BOOL)isOSTMuted;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)a0;
- (void)onTimelineViewEnterBackground:(id)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
