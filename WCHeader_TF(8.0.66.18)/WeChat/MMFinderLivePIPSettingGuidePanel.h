@class UIButton, MMFinderLiveTaskId, UIView, MMUILabel;

@interface MMFinderLivePIPSettingGuidePanel : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *jumpButton;
@property (nonatomic) BOOL isContentWidthChanged;
@property (copy, nonatomic) id /* block */ jumpCallback;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)setDescContent;
- (void)layoutJumpButton;
- (void)jumpButtonAction;
- (void)layoutConfirmButton;
- (void)confirmButtonAction;
- (void)clearTags;
- (void)pageSheetDidAppear;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
