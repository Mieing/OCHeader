@class UIButton, NSString, MMUIButton, MMUIView, RichTextView, MMUILabel;
@protocol MMLimitedModeEntryProtocolViewControllerDelegate;

@interface MMLimitedModeEntryProtocolViewController : MMUIHalfScreenViewController <ILinkEventExt> {
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    RichTextView *m_descContentView;
    UIButton *m_agreeButton;
    UIButton *m_disagreeButton;
    MMUIButton *_closeButton;
}

@property (nonatomic) long long scene;
@property (weak, nonatomic) id<MMLimitedModeEntryProtocolViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)initData;
- (void)viewDidTransitionToNewSize;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)layoutDisagreeButton;
- (void)layoutAgreeButton;
- (void)onClickAgreeButton:(id)a0;
- (void)onClickDisagreeButton:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (id)closeButton;
- (void)setCloseButton:(id)a0;
- (void).cxx_destruct;

@end
