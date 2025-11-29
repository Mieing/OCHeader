@class UIImageView, UILabel, UIView, UIButton;

@interface LSIMMessageCardCancelCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *orderContainerView;
@property (retain, nonatomic) UIImageView *orderImageView;
@property (retain, nonatomic) UILabel *orderNameLabel;
@property (retain, nonatomic) UILabel *orderDescLabel;
@property (retain, nonatomic) UILabel *cancelReasonLabel;
@property (retain, nonatomic) UILabel *cancelDeadLineLabel;
@property (retain, nonatomic) UIButton *reviewButton;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UIView *sepLine;

- (void)clickDetailButton;
- (void)configWithCellVM:(id)a0;
- (void)handleContainerTapGesture:(id)a0;
- (BOOL)cancelsTouchesInContainerView;
- (void)clickReviewButton;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
