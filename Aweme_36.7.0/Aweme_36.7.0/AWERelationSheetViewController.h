@class UIStackView, AFDButton, NSArray, NSString, NSLayoutConstraint;

@interface AWERelationSheetViewController : AFDSheetViewController <AWERelationSheetSectionContainer>

@property (retain, nonatomic) UIStackView *contentStackView;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) AFDButton *closeButton;
@property (retain, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginEditingFirstTextField;
- (void)commitChanges:(id /* block */)a0;
- (void)p_keyboardWillChangeFrame:(id)a0;
- (void)p_closeButtonTapped:(id)a0;
- (id)sectionOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
