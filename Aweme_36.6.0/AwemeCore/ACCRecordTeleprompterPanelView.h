@class UIButton, UIView, AWEVideoPublishViewModel, ACCRecordTeleprompterPanelViewConfig, ACCRecordCaptionListViewModel, ACCRecordCaptionListViewController;

@interface ACCRecordTeleprompterPanelView : UIView

@property (retain, nonatomic) ACCRecordTeleprompterPanelViewConfig *config;
@property (retain, nonatomic) ACCRecordCaptionListViewController *captionListVC;
@property (retain, nonatomic) ACCRecordCaptionListViewModel *captionListVM;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *fontSizeButton;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;

- (void)closeButtonClicked;
- (void)buildViews;
- (void)bindObservers;
- (BOOL)canHandlePanGesture:(id)a0;
- (void)setupFontSizeButtonInitialState;
- (void)updateFontSizeButtonSelected;
- (BOOL)isBigFontMode;
- (id)currentPlainTextFont;
- (id)currentCaptionTextFont;
- (id)generateCaptionListConfig;
- (void)fontSizeButtonClicked;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
