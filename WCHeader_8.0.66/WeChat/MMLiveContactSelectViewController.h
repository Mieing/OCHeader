@class MMLiveContactSelectView, NSString;
@protocol MMLiveContactSelectViewControllerDelegate;

@interface MMLiveContactSelectViewController : MMPageSheetBaseViewController <ContactSelectViewDelegate, MMPageSheetGestureRecognizerDelegate>

@property (nonatomic) long long currentSelectType;
@property (retain, nonatomic) MMLiveContactSelectView *selectView;
@property (weak, nonatomic) id<MMLiveContactSelectViewControllerDelegate> liveContactDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)pageSheetContentHeight;
- (void)pageSheetWillAppear;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)initView;
- (void)initPageSheet;
- (void)onSelectContact:(id)a0;
- (BOOL)onFilterContactCandidate:(id)a0;
- (id)getSafeSearchViewController;
- (void)makeTopCell:(id)a0;
- (void)onSelectTopCell;
- (BOOL)onContainerPanGestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)dismissLiveContactSelect;
- (void).cxx_destruct;

@end
