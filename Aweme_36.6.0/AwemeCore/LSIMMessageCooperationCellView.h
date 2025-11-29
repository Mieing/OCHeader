@class UIStackView, UIImageView, UILabel, NSMutableArray, UIView;

@interface LSIMMessageCooperationCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *shopIconView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (retain, nonatomic) UIView *spacingViewBottom;
@property (retain, nonatomic) UIStackView *buttonsContainer;

- (void)configWithCellVM:(id)a0;
- (void)handleContainerTapGesture:(id)a0;
- (BOOL)cancelsTouchesInContainerView;
- (void)configActionButton:(id)a0 actionType:(id)a1;
- (void)handleActionBtnClicked:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
