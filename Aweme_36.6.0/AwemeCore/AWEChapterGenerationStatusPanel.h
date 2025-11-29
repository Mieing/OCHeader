@class AWEAwemeModel, UIView, DUXContentSheet, AWEPageContext, NSString, UIImageView, UIButton, UILabel;

@interface AWEChapterGenerationStatusPanel : UIViewController <DUXSheetDelegate>

@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *closeArea;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UILabel *loadingDetailLabel;
@property (retain, nonatomic) UIImageView *asynImageView;
@property (retain, nonatomic) UIButton *asynButton;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) AWEPageContext *contextInfo;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)configContent;
- (void)trackPanelShow;
- (void)trackPanelClickWithButtonName:(id)a0;
- (void)didClickAsynButton:(id)a0;
- (void)didClickAddButton:(id)a0;
- (void)didClickRetryButton:(id)a0;
- (void)configureWithModel:(id)a0 context:(id)a1 enterFrom:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)show;
- (void)setupUI;

@end
