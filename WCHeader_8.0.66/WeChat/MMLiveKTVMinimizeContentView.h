@class MMUILabel, NSString, UIImageView, MMLiveTaskId, MMLiveKtvUserView, MMFinderLiveTask, MMFinderLiveKTVBox;

@interface MMLiveKTVMinimizeContentView : UIView <MMFinderLiveKTVUIExt, MMFinderLiveKTVStateExt, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (readonly, nonatomic) MMFinderLiveKTVBox *ktvBox;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long currState;
@property (nonatomic) struct CGSize { double width; double height; } selfSize;
@property (retain, nonatomic) UIImageView *musicIconView;
@property (retain, nonatomic) MMLiveKtvUserView *singerUserView;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) NSString *ktvThemeResourceFetchSessionToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 Scene:(unsigned long long)a1;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)createMusicIconView;
- (void)updateMusicIconHidden;
- (void)createSingerUserView;
- (void)updateSingerUserHidden;
- (void)createStateLabel;
- (void)updateStateLabelOrigin;
- (void)updateStateLabelText;
- (void)checkSelfSizeChanged;
- (void)onSelfSizeChanged;
- (double)mainSingerWidgetSizeValue;
- (id)stateLabelFont;
- (double)stateLabelTopMargin;
- (double)standardWidth;
- (double)currContentScale;
- (void)onLiveKTVMainWidgetColorUpdate:(id)a0 taskId:(id)a1;
- (void)onLiveTask:(id)a0 micUsersInfoChanged:(id)a1;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 singStateChanged:(long long)a2;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 singerContactUpdated:(id)a2;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 singerVoicingChanged:(BOOL)a2;
- (void)onLiveTaskId:(id)a0 ktvState:(id)a1 singerUserIdChanged:(id)a2;
- (void)updateSingerUserView:(id)a0;
- (void).cxx_destruct;

@end
