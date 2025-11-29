@class MMUILabel, NSString, MMGrowTextView, ColikeAppInfo, UIScrollView, MMUIButton, WSWowShareReceiverVideoContentView;

@interface WSWowShareGlobalReceiverViewController : MMUIViewController <MMGrowTextViewDelegate, ITopStoryColikeExt, UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) WSWowShareReceiverVideoContentView *videoContentView;
@property (retain, nonatomic) MMGrowTextView *imputField;
@property (retain, nonatomic) MMUILabel *textNumView;
@property (retain, nonatomic) MMUILabel *textLimitView;
@property (retain, nonatomic) MMUIButton *wowEduButton;
@property (retain, nonatomic) NSString *paramString;
@property (retain, nonatomic) ColikeAppInfo *appInfo;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *docId;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (nonatomic) BOOL disappearIsFromSubmit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPresentWowGloabalReceiverPage:(id)a0 appId:(id)a1 appName:(id)a2;

- (id)initWithOpenParamString:(id)a0 appId:(id)a1 appName:(id)a2 resultBlock:(id /* block */)a3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)analyseData;
- (void)initNavBar;
- (void)initView;
- (void)updateTextNoteViews;
- (void)foldSelf;
- (void)onCancel;
- (void)onDone;
- (void)enterCommentDone:(id)a0;
- (void)openWowEducatePage;
- (void)onRequestColikePostEnd:(BOOL)a0 errorMsg:(id)a1;
- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)TextViewDidEnter:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
