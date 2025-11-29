@class UILabel, UIButton, AWESearchAIGCInputCreatePanelHeaderCellViewModel;
@protocol AWESearchAIGCInputCreatePanelHeaderCellDelegate;

@interface AWESearchAIGCInputCreatePanelHeaderCell : AWESearchAIGCInputCreatePanelBaseCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWESearchAIGCInputCreatePanelHeaderCellViewModel *viewModel;
@property (weak, nonatomic) id<AWESearchAIGCInputCreatePanelHeaderCellDelegate> delegate;

+ (double)viewHeightWithViewModel:(id)a0;

- (void)closeAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
