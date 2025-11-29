@class MMUIButton, NSString, MMFinderLiveTaskId, UIScrollView, UIView, MMUILabel;

@interface MMFinderLivePromoteArticleAlertPageSheetView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) MMUIButton *confirmBtn;
@property (retain, nonatomic) NSString *alertContent;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (copy, nonatomic) id /* block */ dismissCallback;

- (id)initWithAlertContent:(id)a0;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (void)layoutContentScrollView;
- (void)layoutTitleLabel;
- (void)layoutContentLabel;
- (void)layoutConfirmBtn;
- (double)contentWidth;
- (double)contentHeight;
- (double)getTitleContentSumHeight;
- (double)getAlertContentBottomMargin;
- (double)getConfirmBtnBottomMargin;
- (id)alertTitle;
- (void)onConfirmAction;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
