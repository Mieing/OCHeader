@class MMUILabel, NSString, UIImageView, UIButton, UIView, LiveInfo, MMUIButton;
@protocol MMGroupLiveReplaySettingPickerControllerDelegate;

@interface MMGroupLiveReplaySettingPickerController : MMUIHalfScreenViewController

@property (retain, nonatomic) LiveInfo *liveInfo;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) BOOL enableLiveReplay;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) MMUILabel *headerTitle;
@property (retain, nonatomic) UIView *firstSeperator;
@property (retain, nonatomic) UIView *secondSeperator;
@property (retain, nonatomic) UIView *thirdSeperator;
@property (retain, nonatomic) UIView *closeReplayStatusView;
@property (retain, nonatomic) MMUILabel *closeReplayTitle;
@property (retain, nonatomic) UIImageView *closeReplayCheckbox;
@property (retain, nonatomic) UIView *openReplayStatusView;
@property (retain, nonatomic) MMUILabel *openReplayTitle;
@property (retain, nonatomic) MMUILabel *openReplaySubtitle;
@property (retain, nonatomic) UIImageView *openReplayCheckbox;
@property (retain, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) id<MMGroupLiveReplaySettingPickerControllerDelegate> settingDelegate;

- (id)initWithLiveInfo:(id)a0 roomId:(id)a1;
- (void)viewDidLoad;
- (void)setUpUI;
- (void)layoutPickerList;
- (void)onOpenReplayClicked;
- (void)onCloseReplayClicked;
- (void)onDoneButtonClicked;
- (void)onCloseButtonClicked;
- (void)updateCheckBox;
- (id)createLabel:(id)a0 withFontSize:(id)a1 withTextColor:(id)a2;
- (id)createHorizontalSeperator;
- (void).cxx_destruct;

@end
