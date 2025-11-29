@class UITableView, UIButton, WCFileBrowserToolBarViewModel, NSString, UIView, MMUIButton, MMUILabel;
@protocol WCFileBrowserToolBarDelegate;

@interface WCFileBrowserToolBar : UIView <UITableViewDataSource>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUIButton *expandButton;
@property (retain, nonatomic) MMUIButton *titleLabel;
@property (retain, nonatomic) MMUILabel *emptyLabel;
@property (retain, nonatomic) UITableView *contentTableView;
@property (retain, nonatomic) UIButton *sendButton;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) WCFileBrowserToolBarViewModel *viewModel;
@property (weak, nonatomic) id<WCFileBrowserToolBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showWithHighlightedFileInfos:(id)a0;
- (void)addToSuperview:(id)a0;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)initViews;
- (void)updateUI;
- (void)layoutUI;
- (void)onDataChanged;
- (void)expandToolBar;
- (void)shrinkToolBar;
- (void)highlightFileInfo:(id)a0;
- (void)onExpandButtonClicked;
- (void)onSendButtonClicked;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
