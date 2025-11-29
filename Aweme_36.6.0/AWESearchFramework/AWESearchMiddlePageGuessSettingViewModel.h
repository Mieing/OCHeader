@class DUXSingleSelectionPanel, NSString, DUXContentSheet, DUXButton, NSArray;

@interface AWESearchMiddlePageGuessSettingViewModel : AWESettingBaseViewModel <DUXSingleSelectionPanelDelegate, DUXSheetDelegate> {
    NSArray *_sectionDataArray;
}

@property (nonatomic) BOOL isRequest;
@property (retain, nonatomic) DUXSingleSelectionPanel *panel;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (nonatomic) BOOL initGuessSwitch;
@property (nonatomic) BOOL initLandingGuess;
@property (nonatomic) BOOL beforeLandingGuess;
@property (nonatomic) BOOL isClickConfirm;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidDismiss:(id)a0;
- (long long)currentSelectedIndex;
- (id)panelBackgroundColor;
- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (BOOL)selectionPanel:(id)a0 willClickRow:(long long)a1;
- (id)generateSettingItemModelWithType:(long long)a0;
- (void)onThemeChange;
- (void)dismissPanel;
- (void)trackClick:(BOOL)a0;
- (void)updateSectionDataArray;
- (void)viewDidDisapper;
- (void)confirmButtonAction;
- (id)panelArray;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (BOOL)showIndicatorImage;
- (id)schematicImageURL;
- (id)switchTitle:(long long)a0;
- (void)handleChange:(BOOL)a0 forModelType:(long long)a1;
- (id)currentSelectTitle;
- (void)showSelectionPanel;
- (void)uploadSetting:(BOOL)a0 forModelType:(long long)a1;
- (id)userSettingsModel;
- (void)setStatus:(BOOL)a0 forModelType:(long long)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)getStatus:(long long)a0;
- (id)commonLog;
- (void)reloadView;

@end
