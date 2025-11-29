@class AWEAwemeModel, NSString, DUXContentSheet, UIView, AWEShowLongVideoHighLightsPanelView, DUXToast;
@protocol AWEShowLongVideoHighLightsPanelDelegate, AnnieXCardModelProtocol;

@interface AWEShowLongVideoHighLightsPanelViewController : UIViewController <AWEShowLongVideoHighLightsPanelViewDelegate, DUXSheetDelegate>

@property (weak, nonatomic) id<AWEShowLongVideoHighLightsPanelDelegate> delegate;
@property (retain, nonatomic) UIView *sheetMaskView;
@property (retain, nonatomic) AWEShowLongVideoHighLightsPanelView *lynxView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) DUXToast *selectedToast;
@property (nonatomic) BOOL isShowed;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *fromPage;
@property (nonatomic) double showTime;
@property (weak, nonatomic) DUXContentSheet *containerSheet;
@property (nonatomic) BOOL shouldPerformVideoShrink;
@property (nonatomic) BOOL isShowingTabbar;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatTimestamp:(long long)a0;
+ (void)showHighLightsPanelWithPanelViewController:(id)a0;
+ (id)showHighLightsPanelWithAwemeModel:(id)a0 delegate:(id)a1;
+ (double)getPanelHeightWithAwemeModel:(id)a0;

- (void)clickShare;
- (void)sharePanelShow;
- (void)showToastIfNeededWithTimestamp:(long long)a0;
- (void)updatePanelWithAwemeModel:(id)a0 currentPlaybackTimeInSec:(double)a1;
- (void)sharePanelDismiss;
- (void)sheetWillShow;
- (void)clickHighLight:(id)a0;
- (void)clickLike;
- (void)clickComment;
- (void)clickFavourite;
- (double)currentPlayBackTimeInSec;
- (id)initWithAwemeModel:(id)a0 referString:(id)a1 enterMethod:(id)a2 fromPage:(id)a3 delegate:(id)a4;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismissSheet;

@end
