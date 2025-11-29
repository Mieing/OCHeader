@class NSString, MJComposingBGMAdjustViewModel, MJComposingBGMAdjustContentView;
@protocol MJComposingBGMAdjustHalfScreenViewControllerDelegate;

@interface MJComposingBGMAdjustHalfScreenViewController : MMPageSheetBaseViewController <MJComposingBGMAdjustContentViewDelegate>

@property (retain, nonatomic) MJComposingBGMAdjustContentView *contentView;
@property (nonatomic) BOOL isShowingInView;
@property (readonly, nonatomic) MJComposingBGMAdjustViewModel *viewModel;
@property (weak, nonatomic) id<MJComposingBGMAdjustHalfScreenViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupPageSheetConfig;
- (void)resetToMainPanel;
- (void)update;
- (void)didCloseBGMAdjustPanel;
- (void)showInView:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)pageSheetDidChangeVisibleHeight:(double)a0;
- (void).cxx_destruct;

@end
