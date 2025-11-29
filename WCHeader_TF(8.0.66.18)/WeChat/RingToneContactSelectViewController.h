@class MMLiveContactSelectView, NSString;
@protocol RingToneContactSelectViewController;

@interface RingToneContactSelectViewController : MMPageSheetBaseViewController <ContactSelectViewDelegate, MMPageSheetGestureRecognizerDelegate>

@property (retain, nonatomic) MMLiveContactSelectView *selectView;
@property (weak, nonatomic) id<RingToneContactSelectViewController> liveContactDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (double)pageSheetContentHeight;
- (void)initView;
- (void)initPageSheet;
- (void)onSelectContact:(id)a0;
- (BOOL)onFilterContactCandidate:(id)a0;
- (id)getSafeSearchViewController;
- (BOOL)onContainerPanGestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)dismissLiveContactSelect;
- (void).cxx_destruct;

@end
