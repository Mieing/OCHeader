@class AWESubtitleActionSheet, NSString;

@interface AWEACCMultiStyleAlertSheetImpl : AWEACCMultiStyleAlertTemplateImpl <AWESubtitleActionSheetDelegate>

@property (retain, nonatomic) AWESubtitleActionSheet *sheetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheetDidClickCancelButton:(id)a0;
- (id)trackerType;
- (BOOL)shouldHiddenCancelForSubtitleActionSheet;
- (id)titleForSubtitleActionSheet;
- (id)buttonTextsForSubtitleActionSheet;
- (id)buttonTypesForSubtitleActionSheet;
- (id)buttonFontsForSubtitleActionSheet;
- (void)didClickedSubtitleActionSheetButtonAtIndex:(long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (void)setupView;
- (id)createParams;

@end
