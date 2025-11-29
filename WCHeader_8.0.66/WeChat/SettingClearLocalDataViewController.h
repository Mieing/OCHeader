@class MMUIScrollView, UIImageView, SightIconView, UILabel, NSString, UIButton;

@interface SettingClearLocalDataViewController : MMUIViewController <WCActionSheetDelegate, IMMNewSessionMgrExt> {
    unsigned int _totalSessionNumber;
    unsigned int _clearSessionNumber;
    unsigned long long _startTimestamp;
    unsigned long long _endTimestamp;
}

@property (retain, nonatomic) MMUIScrollView *backgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) SightIconView *sightIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *clearBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)close;
- (void)initViews;
- (void)layoutUI;
- (void)layoutDefaultUI;
- (void)layoutClearingUI;
- (void)layoutFinishedUI;
- (void)updateLabel:(id)a0 text:(id)a1 lineHeight:(double)a2;
- (void)showClearLocalDataActionSheet;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onTapClearBtn;
- (void)onArriveFundConfirmClearAllMsg;
- (void)onArriveFundCancelClearAllMsg:(id)a0;
- (void)clearLocalData;
- (void)onDeleteSession:(unsigned int)a0 withUser:(id)a1;
- (void)onDidDeleteAllSession;
- (void)reportClearLocalDataFinished;
- (void).cxx_destruct;

@end
