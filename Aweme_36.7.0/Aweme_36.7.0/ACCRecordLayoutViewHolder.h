@class NSMapTable, UIView;

@interface ACCRecordLayoutViewHolder : NSObject

@property (retain, nonatomic) NSMapTable *subviewsMapTable;
@property (weak, nonatomic) UIView *scanModeSwitchView;
@property (weak, nonatomic) UIView *recordModeSwitchView;
@property (weak, nonatomic) UIView *stickerContainerView;
@property (weak, nonatomic) UIView *uploadVideoButton;
@property (weak, nonatomic) UIView *uploadVideoLabel;
@property (weak, nonatomic) UIView *uploadVideoButtonForAuthority;
@property (weak, nonatomic) UIView *uploadVideoLabelForAuthority;
@property (weak, nonatomic) UIView *authorityView;
@property (weak, nonatomic) UIView *inspirationAssistanceView;
@property (weak, nonatomic) UIView *gridView;
@property (weak, nonatomic) UIView *foregroundRenderView;
@property (weak, nonatomic) UIView *propHintView;
@property (weak, nonatomic) UIView *stickerSwitchButton;
@property (weak, nonatomic) UIView *stickerSwitchLabel;
@property (weak, nonatomic) UIView *switchLengthView;
@property (weak, nonatomic) UIView *timeLabel;
@property (weak, nonatomic) UIView *completeButton;
@property (weak, nonatomic) UIView *deleteButton;
@property (weak, nonatomic) UIView *speedControl;
@property (weak, nonatomic) UIView *commerceEnterView;
@property (weak, nonatomic) UIView *exposePropPanelTrayView;
@property (weak, nonatomic) UIView *addFeedMusicView;
@property (weak, nonatomic) UIView *recordButton;
@property (weak, nonatomic) UIView *selectMusicButton;
@property (weak, nonatomic) UIView *closeButton;
@property (weak, nonatomic) UIView *uploadMaskView;
@property (weak, nonatomic) UIView *multiSegPropContainerView;
@property (weak, nonatomic) UIView *liteDiaryThemeInfoView;
@property (weak, nonatomic) UIView *liteDiaryThemeListView;
@property (weak, nonatomic) UIView *scanToScanQRCodeButton;
@property (weak, nonatomic) UIView *scanToScanQRCodeLabel;
@property (weak, nonatomic) UIView *scanToScanHistoryButton;
@property (weak, nonatomic) UIView *scanToScanTipsView;
@property (weak, nonatomic) UIView *dyCodeButtonForAuthorityView;
@property (weak, nonatomic) UIView *dyCodeLabelForAuthorityView;
@property (weak, nonatomic) UIView *momentFeedEntranceView;
@property (weak, nonatomic) UIView *scaleButton;
@property (weak, nonatomic) UIView *scanToScanHistoryButtonForAuthorityView;
@property (weak, nonatomic) UIView *duetSwtichButton;
@property (weak, nonatomic) UIView *templateVideoPreview;
@property (weak, nonatomic) UIView *teleprompterContainerView;

- (id)viewForType:(id)a0;
- (void)addSubview:(id)a0 viewType:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
