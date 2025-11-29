@class NSString, UILabel, MMTableViewInfo, MMUILabel;

@interface SettingAboutMMViewController : MMUIViewController <MMNewTipsMgrExt, TransitioningAnimationDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_labelProduct;
    BOOL m_bFullVersion;
    MMUILabel *_labelVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reloadData;
- (id)tableFooterViewOnUpdate:(id)a0 urlStr:(id)a1;
- (void)updateProduct;
- (id)appstoreVersion;
- (id)getHeaderView;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (double)maxWidthForBottomViews;
- (void)addBottomView;
- (id)copyrightLabel;
- (id)bottomButtonWithString:(id)a0;
- (id)getICPAttrContentWithLineHeight:(double)a0 descender:(double)a1 string:(id)a2 darkMode:(BOOL)a3;
- (id)genFooterButtonListViewWithMaxWidth:(double)a0;
- (void)showAgreementWebviewWithUrl:(id)a0;
- (void)showKFPhoneNumActionSheetWithConfig:(int)a0;
- (void)showRate;
- (void)showSystemNotice;
- (void)showWhatsNewEnd;
- (void)showUpdate;
- (void)showWhatsNewWillEnd;
- (void)viewDidAppear:(BOOL)a0;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void)openICPWebView;
- (void)openAlgorithmWebView;
- (void).cxx_destruct;

@end
