@class IESLivePlaceholderTextView, UIButton, UIImageView, NSString, UILabel, UIView, UITableView;
@protocol IESLiveGuideTitleEditPanelDatasource;

@interface IESLiveGuideTitleEditPanel : UIView <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate>

@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) IESLivePlaceholderTextView *inputTextView;
@property (retain, nonatomic) UIView *aiTitlesContainer;
@property (retain, nonatomic) UIImageView *aiIcon;
@property (retain, nonatomic) UILabel *aiTipLabel;
@property (retain, nonatomic) UITableView *aiTitlesTableView;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UILabel *useTipLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (nonatomic) long long selectedAiTitleIndex;
@property (weak, nonatomic) id<IESLiveGuideTitleEditPanelDatasource> datasource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmButtonTapped;
- (void)layoutTopContainer;
- (void)layoutBottomContainer;
- (long long)getTitleLengthLimit;
- (void)refreshConfirmButtonStatus;
- (void)layoutInputTextView;
- (void)layoutAITitleContainer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 selectedAiTitleIndex:(long long)a2 closeBlock:(id /* block */)a3 confirmBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;
- (void)closeButtonTapped;

@end
