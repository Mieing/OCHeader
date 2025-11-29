@class NSString, NSArray, AWEVideoPublishViewModel, ACCMVTextEditorInputView, UITableView, AWESelectTemplateViewProvider, UILabel, ACCAnimatedButton;
@protocol AWESelectTemplateTextEditorVCDelegate;

@interface AWESelectTemplateTextEditorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCAnimatedButton *confirmButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) ACCMVTextEditorInputView *textInputView;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSArray *backupInfo;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *dataSource;
@property (weak, nonatomic) id<AWESelectTemplateTextEditorVCDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) AWESelectTemplateViewProvider *viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)p_handleConfirmButtonClicked:(id)a0;
- (void)resetSelectedIndex;
- (id)topRoundCornerShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCoverOfTextFragment:(id)a0;
- (double)textEditorPanelHeight;
- (void)p_selectedTextFragmentAtIndexPath:(id)a0 delayShowBorder:(BOOL)a1;
- (void)p_raiseInputView;
- (void)p_closeWithAnimation;
- (void)p_handleCloseButtonClicked:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;

@end
