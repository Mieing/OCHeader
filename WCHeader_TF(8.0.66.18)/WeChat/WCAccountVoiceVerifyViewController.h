@class UIButton, NSString, WCRedesignButtonItem, MMUILabel;
@protocol WCAccountVoiceVerifyViewControllerDelegate;

@interface WCAccountVoiceVerifyViewController : WCAccountBaseViewController <VoiceVerifyLanguageDelegate>

@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) WCRedesignButtonItem *changeLanguageButtonItem;
@property (retain, nonatomic) UIButton *voiceButton;
@property (weak, nonatomic) id<WCAccountVoiceVerifyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initData;
- (void)initView;
- (void)onTapChangeLanguageButton;
- (void)onTapVoiceButton;
- (void)onSelectLanguage:(id)a0 Code:(id)a1;
- (void).cxx_destruct;

@end
