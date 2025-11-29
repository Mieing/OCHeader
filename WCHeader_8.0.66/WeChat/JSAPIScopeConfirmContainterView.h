@class UIView, MMWebImageView, NSString, JSApiScopeConfirmWindow, UIButton, UITableView, NSMutableArray, UILabel;

@interface JSAPIScopeConfirmContainterView : UIView <UITableViewDataSource, UITableViewDelegate> {
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_titleSplitLine;
    MMWebImageView *_appIconImageView;
    UILabel *_scopeDescriptionLabel;
    UIView *_tableSplitLine;
    UITableView *_scopeTableView;
    UIView *_buttonSplitLine;
    UIView *_buttonVerticalSpliteLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSMutableArray *_arrSelect;
}

@property (weak, nonatomic) JSApiScopeConfirmWindow *weakConfirmWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)confirmWindow;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (unsigned long long)designContentWidth;
- (double)designNoTableContentHeightToContentWidthRatio;
- (double)designTableHeightToContentWidthRatio;
- (id)titleText;
- (void)onClickButtonConfirm:(id)a0;
- (void)onClickButtonCancel:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
