@class NSString, MMHeadImageView, UIButton, MMCPLabel, MMPageSheetAdapter, MMUILabel, CContact, MMUIButton;

@interface WWKFAddContactViewController : MMUIViewController <MMPageSheetAdapterDelegate>

@property (retain, nonatomic) CContact *contact;
@property (copy, nonatomic) id /* block */ comfirmBlock;
@property (nonatomic) BOOL bHalfScreen;
@property (copy, nonatomic) NSString *antispamText;
@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) MMCPLabel *descLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) MMUILabel *antispamLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (weak, nonatomic) MMPageSheetAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)halfScreenHeight;

- (id)initWithContact:(id)a0 inHalfScreen:(BOOL)a1 antispamText:(id)a2 comfirmBlock:(id /* block */)a3;
- (void)initMainUI;
- (void)updateUICompts;
- (void)updateUIComptsInHalfScreenState;
- (void)updateUIComptsInFullScreenState;
- (void)viewDidLayoutSubviews;
- (void)updateUILayoutInHalfScreenState;
- (void)updateUILayoutInFullScreenState;
- (void)viewDidLoad;
- (void)pageSheetWillBePresentFrom:(id)a0 inContainer:(id)a1;
- (void)pageSheetDidAppear:(id)a0;
- (void)pageSheetWillClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetDidDisappear:(id)a0;
- (void)pageSheetWillAppear:(id)a0;
- (void)pageSheetWillClose:(id)a0;
- (void)pageSheetWillDisappear:(id)a0;
- (void)onGetOpenImResourceDone:(id)a0;
- (void)onCancel;
- (void)onConfirm;
- (void).cxx_destruct;

@end
