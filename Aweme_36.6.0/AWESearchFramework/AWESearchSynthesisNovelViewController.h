@class AWESearchSynthesisNovelBookSettingConfig, AWESearchSynthesisNovelCatalogContainer, DUXActionSheet, NSString, AWESearchSynthesisNovelToolView, AWESearchSynthesisNovelDataEngine, BDXWebView, AWESearchSynthesisNovelProgressView, AWESearchSynthesisNovelTracker, NSDictionary, AWESearchSynthesisNovelSettingView, UILabel;

@interface AWESearchSynthesisNovelViewController : NSObject <AWESearchSynthesisNovelCatalogViewDelegate, AWESearchSynthesisNovelSettingViewDelegate, AWESearchSynthesisNovelProgressViewDelegate, DUXActionSheetDelegate>

@property (retain, nonatomic) AWESearchSynthesisNovelCatalogContainer *catalogContainer;
@property (retain, nonatomic) AWESearchSynthesisNovelToolView *toolView;
@property (retain, nonatomic) AWESearchSynthesisNovelProgressView *progressView;
@property (retain, nonatomic) AWESearchSynthesisNovelSettingView *settingView;
@property (retain, nonatomic) UILabel *chapterNameLabel;
@property (nonatomic) BOOL hasShownHistoryPopup;
@property (copy, nonatomic) id /* block */ historyPopupCompletionBlock;
@property (retain, nonatomic) DUXActionSheet *historyActionSheet;
@property (weak, nonatomic) BDXWebView *webView;
@property (weak, nonatomic) AWESearchSynthesisNovelDataEngine *novelDataEngine;
@property (retain, nonatomic) AWESearchSynthesisNovelBookSettingConfig *bookConfig;
@property (weak, nonatomic) AWESearchSynthesisNovelTracker *novelTracker;
@property (copy, nonatomic) id /* block */ showWebLoadingBlock;
@property (copy, nonatomic) id /* block */ catalogClickedChapter;
@property (copy, nonatomic) id /* block */ updateLoadingBackgroundColorBlock;
@property (copy, nonatomic) NSDictionary *webSchemeParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (double)safeAreaBottom;
- (void)p_layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initFrame;
- (void)onOrderClick:(id)a0 isReverse:(BOOL)a1;
- (void)onBookDescClick:(id)a0;
- (void)onChapterClick:(id)a0 url:(id)a1;
- (void)progressJumpWithView:(id)a0 curChapterId:(long long)a1 curChapterName:(id)a2 jumpType:(unsigned long long)a3;
- (void)onSelectSettingView:(id)a0 screenBrightness:(double)a1;
- (void)onSelectSettingView:(id)a0 fontSize:(double)a1;
- (void)onSelectSettingView:(id)a0 backgroundType:(unsigned long long)a1;
- (void)onSelectSettingView:(id)a0 pageMode:(unsigned long long)a1;
- (void)p_showTool:(BOOL)a0;
- (void)p_showNavBar:(BOOL)a0;
- (void)p_updateNavBarBackgroundType:(unsigned long long)a0;
- (id)themeStringWithBackgroundType:(unsigned long long)a0;
- (void)p_updateNovelContentBackgroundType:(unsigned long long)a0;
- (void)p_updateProgressViewState;
- (void)p_updateNovelContentFontSize:(long long)a0;
- (void)p_updateChapterLabelbackgroundType:(unsigned long long)a0;
- (double)pageMaxY;
- (id)getToolView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)catalogItem;
- (id)darkModeItem;
- (void)p_updateCatalogView;
- (void)p_showSetting:(BOOL)a0;
- (void)onLoadWebView:(id)a0;
- (void)configNovelSubviews;
- (void)willEnterNovelInfoView;
- (void)willPerformTranscoding;
- (void)didInjectNovelCurrentContent:(id)a0;
- (void)changeMenuBarStatus;
- (void)tryShowHistoryPopupCompletion:(id /* block */)a0;
- (void)didReceiveSetTranscodeResult;
- (void)willOpenChapterWithURL:(id)a0 fromClickSource:(id)a1;
- (void)willReturnToOriginalWeb;
- (void)onSelectSettingView:(id)a0 autoPayStatus:(BOOL)a1;
- (void).cxx_destruct;
- (id)settingItem;

@end
