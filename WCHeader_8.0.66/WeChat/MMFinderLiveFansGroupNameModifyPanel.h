@class UIButton, NSString, MMFinderLiveTaskId, UIView, MMFinderLiveFansGroupInputView, MMUILabel;

@interface MMFinderLiveFansGroupNameModifyPanel : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveFansGroupInputView *inputView;
@property (retain, nonatomic) MMUILabel *fansGroupInputTipLabel;
@property (retain, nonatomic) UIButton *modifyButton;
@property (nonatomic) BOOL isKeyBoardShow;
@property (nonatomic) double keyBoardHeight;
@property (retain, nonatomic) NSString *inputText;
@property (copy, nonatomic) id /* block */ fansGroupNameModifiedCallback;

- (id)initWithTaskId:(id)a0;
- (void)initNotifications;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutInputView;
- (void)layoutFansGroupInputTipLabel;
- (void)layoutModifyButton;
- (double)contentWidth;
- (double)contentHeight;
- (double)getMaxPanelHeight;
- (void)updateModifyButtonOrigin;
- (void)updateDetailViewFrame;
- (void)onModifyButtonClicked:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)updateFansGroupName;
- (BOOL)getModifyButtonEnable;
- (void)makeInputBecomeFirstResponder;
- (void).cxx_destruct;

@end
