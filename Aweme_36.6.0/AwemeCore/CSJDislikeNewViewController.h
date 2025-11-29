@class CSJMaterialMeta, NSArray, UIImageView, CSJDislikeNewInputView, UIView, NSString, UITableView;

@interface CSJDislikeNewViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CSJDislikeNewOptionalCellDelegate, CSJDislikeNewInputViewDelegate>

@property (copy, nonatomic) NSArray *dislikeWordsViewModelArray;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) double totalCellHeight;
@property (retain, nonatomic) CSJDislikeNewInputView *dislikeNewInputView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (retain, nonatomic) CSJMaterialMeta *meta;
@property (nonatomic) long long lastDeviceOrientation;
@property (copy, nonatomic) id /* block */ dislikeResultBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initDislikeWithMaterial:(id)a0 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)keyboardWillShowInDislikeNewInputView:(id)a0;
- (void)keyboardWillHideInDislikeNewInputView:(id)a0;
- (void)keyboardDidHideInDislikeNewInputView:(id)a0;
- (id)containerViewInDislikeNewInputView:(id)a0;
- (void)dislikeNewInputView:(id)a0 inputText:(id)a1;
- (void)dislikeNewOptionalCell:(id)a0 selectedDislikeWords:(id)a1;
- (void)layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)submitWithDislikeWords:(id)a0;
- (void)submitWithText:(id)a0;
- (void)backgroundViewAction:(id)a0;
- (void)keyboardDidShowInDislikeNewInputView:(id)a0;
- (void)dislikeNewInputViewAction:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)shouldAutorotate;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
